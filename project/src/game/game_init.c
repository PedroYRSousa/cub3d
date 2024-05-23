/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:56:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/07/07 04:12:50 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "libft.h"
#include "game.h"
#include "system.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

static void	init_colors(void)
{
	game_instance()->ceill_color[COLOR_RED] = -1;
	game_instance()->ceill_color[COLOR_GREEN] = -1;
	game_instance()->ceill_color[COLOR_BLUE] = -1;
	game_instance()->floor_color[COLOR_RED] = -1;
	game_instance()->floor_color[COLOR_GREEN] = -1;
	game_instance()->floor_color[COLOR_BLUE] = -1;
}

static char	check_elements_empty_and_valid(void)
{
	int				index;
	const t_game	*g = game_instance();

	index = 0;
	while (index < 3)
	{
		if (g->ceill_color[index] == -1 || g->floor_color[index] == -1)
			return (TRUE);
		index++;
	}
	index = 0;
	while (index < 4)
	{
		if (g->textures_path[index] == NULL)
			return (TRUE);
		index++;
	}
	if (game_get_color(g->ceill_color) == game_get_color(g->floor_color))
		return (TRUE);
	return (FALSE);
}

static void	read_line(char *line)
{
	if (ft_strlen(line) <= 0)
		return ;
	if (ft_strnstr(line, "F ", ft_strlen(line))
		|| ft_strnstr(line, "C ", ft_strlen(line)))
		game_set_color(line);
	else if (ft_strnstr(line, "NO ", ft_strlen(line))
		|| ft_strnstr(line, "SO ", ft_strlen(line))
		|| ft_strnstr(line, "EA ", ft_strlen(line))
		|| ft_strnstr(line, "WE ", ft_strlen(line)))
		game_set_texture(line);
	else if (check_elements_empty_and_valid())
		system_error(ERROR_MAP);
	else
		game_set_map(line);
}

void	game_init(char *map_path)
{
	int		fd;
	char	*line;
	char	*extension;

	extension = ft_strnstr(map_path, ".cub", ft_strlen(map_path));
	if (!extension || ft_strcmp(extension, ".cub") != 0)
		system_error(ERROR_EXTENSION);
	fd = open(map_path, O_RDONLY);
	if (fd < 0)
		system_error(ERROR_FD);
	init_colors();
	while (TRUE)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		read_line(line);
		free(line);
	}
	game_check_map();
	game_set_player();
	close(fd);
}
