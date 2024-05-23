/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast_calc__texture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:18:30 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/28 05:09:45 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "raycast.h"

void	raycast_calc__texture(t_ray *ray)
{
	if (ray->hit_side == 0)
	{
		if (ray->perpendicular_dist <= 0)
			ray->texture = TEXTURE_SO;
		else
			ray->texture = TEXTURE_NO;
	}
	else if (ray->hit_side == 1)
	{
		if (ray->perpendicular_dist <= 0)
			ray->texture = TEXTURE_EA;
		else
			ray->texture = TEXTURE_WE;
	}
}
