/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller_handle_key_press.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:49:58 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 23:50:45 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "game.h"
#include "view.h"
#include "libft.h"
#include "engine.h"
#include "vector.h"
#include "controller.h"
#include <math.h>

static void	rotate(t_game *g, double rad)
{
	g->dir = vector_rotate(g->dir, rad);
	g->plane = vector_rotate(g->plane, rad);
	view_draw();
}

static void	strafe(t_game *g, t_vector speed)
{
	t_vector		new_pos;

	speed = vector_rotate(speed, 1.5708f);
	new_pos = vector_vadd(g->pos, speed);
	if (g->map[(int)new_pos.x][(int)new_pos.y] != '1')
		g->pos = vector_copy(new_pos);
	view_draw();
}

static void	move(t_game *g, t_vector speed)
{
	t_vector	new_pos;

	new_pos = vector_vadd(g->pos, speed);
	if (new_pos.x < ft_count_matrix((void **)g->map) && new_pos.x >= 0)
		if (new_pos.y < ft_strlen(g->map[(int)new_pos.x]) && new_pos.y >= 0)
			if (g->map[(int)new_pos.x][(int)new_pos.y] != '1')
				g->pos = vector_copy(new_pos);
	view_draw();
}

int	controller_handle_key_press(int key_code)
{
	t_game	*g;

	g = game_instance();
	if (key_code == 65307)
		controller_handle_exit();
	if (key_code == 'w' || key_code == 65362)
		move(g, vector_nmult(g->dir, SPEED));
	if (key_code == 's' || key_code == 65364)
		move(g, vector_nmult(g->dir, -SPEED));
	if (key_code == 'd')
		strafe(g, vector_nmult(g->dir, SPEED_STRAFE));
	if (key_code == 'a')
		strafe(g, vector_nmult(g->dir, -SPEED_STRAFE));
	if (key_code == 65361)
		rotate(g, -SPEED_ROTATE);
	if (key_code == 65363)
		rotate(g, SPEED_ROTATE);
	return (key_code);
}
