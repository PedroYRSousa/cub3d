/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_set_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:56:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/07/07 03:56:11 by pyago-ra         ###   ########.fr       */
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
	system_error(ERROR_TEXTURE);
}

static char	*get_first_path_reference(char *line)
{
	char	*aux;

	aux = ft_strnstr(line, "NO", ft_strlen(line));
	if (aux == NULL)
		aux = ft_strnstr(line, "SO", ft_strlen(line));
	if (aux == NULL)
		aux = ft_strnstr(line, "EA", ft_strlen(line));
	if (aux == NULL)
		aux = ft_strnstr(line, "WE", ft_strlen(line));
	aux += 2;
	while (*aux == ' ')
		aux++;
	return (aux);
}

void	game_set_texture(char *line)
{
	char	*aux;
	char	**texture;

	aux = get_first_path_reference(line);
	texture = NULL;
	if (ft_strnstr(line, "NO ", ft_strlen(line)))
		texture = &(game_instance()->textures_path[TEXTURE_NO]);
	else if (ft_strnstr(line, "SO ", ft_strlen(line)))
		texture = &(game_instance()->textures_path[TEXTURE_SO]);
	else if (ft_strnstr(line, "EA ", ft_strlen(line)))
		texture = &(game_instance()->textures_path[TEXTURE_EA]);
	else if (ft_strnstr(line, "WE ", ft_strlen(line)))
		texture = &(game_instance()->textures_path[TEXTURE_WE]);
	if (ft_strlen(aux) < 4)
		error(line);
	(*texture) = ft_substr(aux, 0, ft_strlen(aux));
}
