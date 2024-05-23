/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:49:33 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 22:35:23 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"
#include "raycast.h"

void	raycast(void)
{
	t_raycast	*r;
	t_ray		*ray;
	int			pos_x;

	pos_x = 0;
	r = raycast_instance();
	while (pos_x < WIDTH)
	{
		ray = &(r->rays[pos_x]);
		raycast_calc__ray_dir__delta_dist__map_pos(ray, pos_x);
		raycast_calc__dist_side___step(ray);
		raycast_calc__dda_line_size__hit_side__wall_map_pos(ray);
		raycast_calc__perpendicular_dist__draw_start_end(ray);
		raycast_calc__texture(ray);
		pos_x++;
	}
}
