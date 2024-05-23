/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast_calc__dist_side___step.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:22:51 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 22:26:33 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "raycast.h"

void	raycast_calc__dist_side___step(t_ray *ray)
{
	const t_game	g = (*game_instance());

	if (ray->ray_dir.x < 0)
	{
		ray->dist_side.x = (g.pos.x - ray->map_pos.x) * ray->delta_dist.x;
		ray->step.x = -1;
	}
	else
	{
		ray->dist_side.x = (ray->map_pos.x + 1 - g.pos.x) * ray->delta_dist.x;
		ray->step.x = 1;
	}
	if (ray->ray_dir.y < 0)
	{
		ray->dist_side.y = (g.pos.y - ray->map_pos.y) * ray->delta_dist.y;
		ray->step.y = -1;
	}
	else
	{
		ray->dist_side.y = (ray->map_pos.y + 1 - g.pos.y) * ray->delta_dist.y;
		ray->step.y = 1;
	}
}
