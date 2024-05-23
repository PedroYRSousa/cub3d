/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_put_raycast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:15:01 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 23:15:49 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"
#include "libft.h"
#include "game.h"
#include "raycast.h"
#include <math.h>

static int	calc_text_x(const t_game g, t_ray ray)
{
	int		text_x;
	double	hit_wall;

	if (ray.hit_side == 0)
		hit_wall = g.pos.y + ft_abs(ray.perpendicular_dist) * ray.ray_dir.y;
	else
		hit_wall = g.pos.x + ft_abs(ray.perpendicular_dist) * ray.ray_dir.x;
	hit_wall -= floor(hit_wall);
	text_x = (int)(hit_wall * (double)(TEXT_WIDTH));
	if (ray.hit_side == 0 && ray.ray_dir.x > 0)
		text_x = TEXT_WIDTH - text_x - 1;
	if (ray.hit_side == 1 && ray.ray_dir.y < 0)
		text_x = TEXT_WIDTH - text_x - 1;
	return (text_x);
}

static void	draw_line(t_ray *ray, t_view *v, int pos_x, t_image texture)
{
	double			draw;
	t_vector		text_pos;
	double			aux_text_pos_y;
	const t_game	g = (*game_instance());
	const double	step = 1.0 * TEXT_HEIGHT / ray->wall_line_height;

	text_pos = vector_create(calc_text_x(g, (*ray)), 0);
	aux_text_pos_y = (ray->draw_start - HEIGHT / 2 + ray->wall_line_height / 2)
		* step;
	draw = ray->draw_start;
	while (draw < ray->draw_end)
	{
		text_pos.y = (int)aux_text_pos_y & (TEXT_HEIGHT - 1);
		aux_text_pos_y += step;
		image_set_pixel(&(v->frame), pos_x, draw,
			image_get_pixel(texture, text_pos.x, text_pos.y));
		draw++;
	}
}

void	view_put_raycast(void)
{
	t_view		*v;
	t_raycast	*r;
	t_ray		*ray;
	t_image		texture;
	int			pos_x;

	raycast();
	v = view_instance();
	r = raycast_instance();
	pos_x = 0;
	while (pos_x < WIDTH)
	{
		ray = &(r->rays[pos_x]);
		texture = v->textures[ray->texture];
		draw_line(ray, v, pos_x, texture);
		pos_x++;
	}
}
