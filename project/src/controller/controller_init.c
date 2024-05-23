/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:49:58 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 23:25:37 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "game.h"
#include "view.h"
#include "engine.h"
#include "vector.h"
#include "controller.h"
#include <math.h>

void	controller_init(void)
{
	t_engine	*e;

	e = engine_instance();
	mlx_expose_hook(e->window, view_draw, ((void *)0));
	mlx_key_hook(e->window, controller_handle_key_press, ((void *)0));
	mlx_hook(e->window, 17, 1L << 17, controller_handle_exit, ((void *)0));
}
