/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 02:13:05 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 04:09:23 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view.h"
#include "game.h"
#include "libft.h"
#include "system.h"
#include "engine.h"
#include <stdio.h>
#include <stdlib.h>

static char	*get_message_error(int code_error)
{
	if (code_error == ERROR_MISUSE)
		return ("Cub3D: Invalid number of arguments. Use: ./cub3D [map_path].");
	if (code_error == ERROR_EXTENSION)
		return ("Cub3D: Invalid map_path, please use .cub extension.");
	if (code_error == ERROR_COLOR)
		return ("Cub3D: Malformed color.");
	if (code_error == ERROR_TEXTURE)
		return ("Cub3D: Malformed texture path.");
	if (code_error == ERROR_MAP)
		return ("Cub3D: Malformed map.");
	return ("Cub3D: Unmapped error!");
}

static void	_exit(int code_error)
{
	view_destroy();
	game_destroy();
	engine_destroy();
	exit(code_error);
}

void	system_error(int code_error)
{
	ft_putendl_fd("Error", 2);
	if (code_error == ERROR_MLX)
		perror("MLX: ");
	else if (code_error == ERROR_FD)
		perror("Cub3D: ");
	else
		ft_putendl_fd(get_message_error(code_error), 2);
	_exit(code_error);
}
