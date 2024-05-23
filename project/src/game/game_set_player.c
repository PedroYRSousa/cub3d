/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_set_player.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:56:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/28 04:36:39 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "libft.h"
#include "game.h"
#include "system.h"
#include <stdlib.h>

static void	set_player(char direction, int x, int y)
{
	t_game	*g;

	g = game_instance();
	g->pos = vector_create(x, y);
	if (direction == 'N')
	{
		g->dir = vector_create(-1, 0);
		g->plane = vector_create(0, -0.66);
	}
	if (direction == 'S')
	{
		g->dir = vector_create(1, 0);
		g->plane = vector_create(0, 0.66);
	}
	if (direction == 'E')
	{
		g->dir = vector_create(0, 1);
		g->plane = vector_create(-0.66, 0);
	}
	if (direction == 'W')
	{
		g->dir = vector_create(0, -1);
		g->plane = vector_create(0.66, 0);
	}
}

void	game_set_player(void)
{
	int			x;
	int			y;
	const char	**map = (const char **)game_instance()->map;

	x = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] == 'N' || map[x][y] == 'S'
			|| map[x][y] == 'E' || map[x][y] == 'W')
				set_player(map[x][y], x, y);
			y++;
		}
		x++;
	}
	if (game_instance()->pos.x == 0 || game_instance()->pos.y == 0)
		system_error(ERROR_MAP);
}
