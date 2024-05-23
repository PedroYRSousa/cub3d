/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_check_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 03:47:24 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/07/07 04:14:24 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "libft.h"
#include "system.h"
#include <stdlib.h>

static void	check_point_up(const char **map, int pos_x, int pos_y)
{
	int	y;

	y = pos_y;
	while (TRUE)
	{
		if (y < 0 || map[pos_x][y] == ' ')
			system_error(ERROR_MAP);
		if (map[pos_x][y] == '1')
			break ;
		y--;
	}
}

static void	check_point_down(const char **map, int pos_x, int pos_y)
{
	int				y;
	const ULONGLONG	size = ft_strlen(map[pos_x]);

	y = pos_y;
	while (TRUE)
	{
		if (y >= (int)size || map[pos_x][y] == ' ')
			system_error(ERROR_MAP);
		if (map[pos_x][y] == '1')
			break ;
		y++;
	}
}

static void	check_point_right(const char **map, int pos_x, int pos_y)
{
	int	x;

	x = pos_x;
	while (TRUE)
	{
		if (x < 0 || map[x][pos_y] == ' ')
			system_error(ERROR_MAP);
		if (map[x][pos_y] == '1')
			break ;
		x--;
	}
}

static void	check_point_left(const char **map, int pos_x, int pos_y)
{
	int				x;
	const ULONGLONG	size = ft_count_matrix((void **)map);

	x = pos_x;
	while (TRUE)
	{
		if (x >= (int)size || map[x][pos_y] == ' ')
			system_error(ERROR_MAP);
		if (map[x][pos_y] == '1')
			break ;
		x++;
	}
}

void	game_check_map(void)
{
	int			x;
	int			y;
	const char	**map = (const char **)game_instance()->map;

	if (map == NULL)
		system_error(ERROR_MAP);
	x = 0;
	while (map[x])
	{
		y = 0;
		while (map[x][y])
		{
			if (map[x][y] != '1' && map[x][y] != ' ')
			{
				check_point_up(map, x, y);
				check_point_down(map, x, y);
				check_point_right(map, x, y);
				check_point_left(map, x, y);
			}
			y++;
		}
		x++;
	}
}
