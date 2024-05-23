/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast_calc__perpendicular_dist__draw_star        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:18:30 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/28 04:55:45 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include "vector.h"
#include "raycast.h"

void	raycast_calc__perpendicular_dist__draw_start_end(t_ray *ray)
{
	const t_game	g = (*game_instance());

	if (ray->hit_side == 0)
		ray->perpendicular_dist
			= ft_abs(ray->wall_map_pos.x - g.pos.x + ((1 - ray->step.x) / 2))
			/ ray->ray_dir.x;
	else
		ray->perpendicular_dist
			= ft_abs(ray->wall_map_pos.y - g.pos.y + ((1 - ray->step.y) / 2))
			/ ray->ray_dir.y;
	ray->wall_line_height = ft_abs(HEIGHT / ray->perpendicular_dist);
	ray->draw_start = HEIGHT / 2 - ray->wall_line_height / 2;
	ray->draw_end = HEIGHT / 2 + ray->wall_line_height / 2;
	if (ray->draw_start > HEIGHT)
		ray->draw_start = HEIGHT - 1;
	if (ray->draw_end > HEIGHT)
		ray->draw_end = HEIGHT - 1;
	if (ray->draw_start < 0)
		ray->draw_start = 0;
	if (ray->draw_end < 0)
		ray->draw_end = 0;
}
