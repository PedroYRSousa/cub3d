/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_put_background.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:15:01 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/07/07 03:34:31 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "view.h"
#include "game.h"
#include "vector.h"
#include "engine.h"

void	view_put_background(void)
{
	t_view		*v;
	t_game		*g;
	t_vector	pos;
	int			color;

	v = view_instance();
	g = game_instance();
	pos = vector_create(0, 0);
	while (pos.x < WIDTH)
	{
		pos.y = 0;
		while (pos.y < HEIGHT)
		{
			if (pos.y < HEIGHT / 2)
				color = game_get_color(g->ceill_color);
			else
				color = game_get_color(g->floor_color);
			image_set_pixel(&(v->frame), pos.x, pos.y, color);
			pos.y++;
		}
		pos.x++;
	}
}
