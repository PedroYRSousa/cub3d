/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_set_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:56:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 03:34:48 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "libft.h"
#include "game.h"
#include "system.h"
#include <stdlib.h>

static void	error(char *line)
{
	free(line);
	system_error(ERROR_MAP);
}

static void	check_syntax(char *line)
{
	ULONGLONG		index;
	const char		*allow_caracteres = "10NSEW ";

	index = 0;
	while (index < ft_strlen(line))
	{
		if (ft_strchr(allow_caracteres, line[index]) == NULL)
			error(line);
		index++;
	}
}

void	game_set_map(char *line)
{
	char	***map;

	check_syntax(line);
	map = &(game_instance()->map);
	if (!(*map))
		(*map) = (char **)ft_creatematrix(sizeof(char *));
	(*map) = (char **)ft_addmatrix((void **)(*map), (void *)line);
}
