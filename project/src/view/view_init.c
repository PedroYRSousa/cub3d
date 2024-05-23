/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:56:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 22:53:31 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "view.h"
#include "game.h"
#include "engine.h"

void	view_init(void)
{
	t_view			*v;
	const t_game	*g = game_instance();
	const t_engine	*e = engine_instance();

	v = view_instance();
	v->textures[TEXTURE_NO] = image_init(
			mlx_xpm_file_to_image(e->mlx, g->textures_path[TEXTURE_NO],
				&(v->textures[TEXTURE_NO].w), &(v->textures[TEXTURE_NO].h)));
	v->textures[TEXTURE_SO] = image_init(
			mlx_xpm_file_to_image(e->mlx, g->textures_path[TEXTURE_SO],
				&(v->textures[TEXTURE_SO].w), &(v->textures[TEXTURE_SO].h)));
	v->textures[TEXTURE_EA] = image_init(
			mlx_xpm_file_to_image(e->mlx, g->textures_path[TEXTURE_EA],
				&(v->textures[TEXTURE_EA].w), &(v->textures[TEXTURE_EA].h)));
	v->textures[TEXTURE_WE] = image_init(
			mlx_xpm_file_to_image(e->mlx, g->textures_path[TEXTURE_WE],
				&(v->textures[TEXTURE_WE].w), &(v->textures[TEXTURE_WE].h)));
	v->frame = image_init_empty(WIDTH, HEIGHT);
	view_draw();
}
