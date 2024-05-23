/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:28:22 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 02:30:11 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "view.h"
#include "game.h"
#include "engine.h"

void	view_destroy(void)
{
	t_view			*v;
	const t_engine	*e = engine_instance();

	v = view_instance();
	if (!e->mlx || !e->window)
		return ;
	mlx_clear_window(e->mlx, e->window);
	if (v->frame.img)
		mlx_destroy_image(e->mlx, v->frame.img);
	if (v->textures[TEXTURE_NO].img)
		mlx_destroy_image(e->mlx, v->textures[TEXTURE_NO].img);
	if (v->textures[TEXTURE_SO].img)
		mlx_destroy_image(e->mlx, v->textures[TEXTURE_SO].img);
	if (v->textures[TEXTURE_EA].img)
		mlx_destroy_image(e->mlx, v->textures[TEXTURE_EA].img);
	if (v->textures[TEXTURE_WE].img)
		mlx_destroy_image(e->mlx, v->textures[TEXTURE_WE].img);
}
