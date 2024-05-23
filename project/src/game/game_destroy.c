/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:28:22 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 04:10:58 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "game.h"
#include <stdlib.h>

void	game_destroy(void)
{
	t_game	*g;

	g = game_instance();
	if (g->textures_path[TEXTURE_NO])
		free(g->textures_path[TEXTURE_NO]);
	if (g->textures_path[TEXTURE_SO])
		free(g->textures_path[TEXTURE_SO]);
	if (g->textures_path[TEXTURE_EA])
		free(g->textures_path[TEXTURE_EA]);
	if (g->textures_path[TEXTURE_WE])
		free(g->textures_path[TEXTURE_WE]);
	if (g->map)
		ft_clear_matrix((void ***)&g->map);
}
