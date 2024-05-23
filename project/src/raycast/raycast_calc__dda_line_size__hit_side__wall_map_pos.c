/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast_calc__dda_line_size__hit_side__wall        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:22:51 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 04:22:54 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include "vector.h"
#include "raycast.h"

static char	check_hit(t_ray *ray)
{
	const t_game	g = (*game_instance());

	if (ray->wall_map_pos.x >= ft_count_matrix((void **)g.map)
		|| ray->wall_map_pos.x < 0)
		return (TRUE);
	if (ray->wall_map_pos.y >= ft_strlen(g.map[(int)ray->wall_map_pos.x])
		|| ray->wall_map_pos.y < 0)
		return (TRUE);
	if (g.map[(int)ray->wall_map_pos.x][(int)ray->wall_map_pos.y] == '1')
		return (TRUE);
	return (FALSE);
}

void	raycast_calc__dda_line_size__hit_side__wall_map_pos(t_ray *ray)
{
	ray->wall_map_pos = vector_copy(ray->map_pos);
	ray->dda_line_size = vector_copy(ray->dist_side);
	while (TRUE)
	{
		if (ray->dda_line_size.x < ray->dda_line_size.y)
		{
			ray->wall_map_pos.x += ray->step.x;
			ray->dda_line_size.x += ray->delta_dist.x;
			ray->hit_side = 0;
		}
		else
		{
			ray->wall_map_pos.y += ray->step.y;
			ray->dda_line_size.y += ray->delta_dist.y;
			ray->hit_side = 1;
		}
		if (check_hit(ray))
			break ;
	}
}
