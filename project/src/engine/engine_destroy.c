/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 23:28:22 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 02:28:53 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "game.h"
#include "engine.h"
#include <stdlib.h>

void	engine_destroy(void)
{
	t_engine	*e;

	e = engine_instance();
	if (!e->mlx)
		return ;
	if (e->window)
		mlx_destroy_window(e->mlx, e->window);
	mlx_destroy_display(e->mlx);
	free(e->mlx);
}
