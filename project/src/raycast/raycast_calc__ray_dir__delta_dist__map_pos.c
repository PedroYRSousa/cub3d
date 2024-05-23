/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast_calc__ray_dir__delta_dist__map_pos.        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:18:30 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/28 04:53:53 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include "vector.h"
#include "raycast.h"
#include <math.h>

void	raycast_calc__ray_dir__delta_dist__map_pos(t_ray *ray, int pos_x)
{
	const t_game	g = (*game_instance());
	const double	multiplier = 2 * (pos_x / (double)WIDTH) - 1;
	const t_vector	camera_pixel = vector_nmult(g.plane, multiplier);

	ray->ray_dir = vector_vadd(g.dir, camera_pixel);
	if (ray->ray_dir.x == 0)
		ray->delta_dist.x = INFINITY;
	else
		ray->delta_dist.x = ft_abs(1 / ray->ray_dir.x);
	if (ray->ray_dir.y == 0)
		ray->delta_dist.y = INFINITY;
	else
		ray->delta_dist.y = ft_abs(1 / ray->ray_dir.y);
	ray->map_pos = vector_create(floor(g.pos.x), floor(g.pos.y));
}
