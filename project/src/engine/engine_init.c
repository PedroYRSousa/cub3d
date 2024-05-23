/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:54:12 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 04:05:41 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "engine.h"
#include "system.h"

void	engine_init(void)
{
	t_engine	*e;

	e = engine_instance();
	e->mlx = mlx_init();
	if (!e->mlx)
		system_error(ERROR_MLX);
	e->window = mlx_new_window(e->mlx, WIDTH, HEIGHT, "Cub3D");
	if (!e->window)
		system_error(ERROR_MLX);
}
