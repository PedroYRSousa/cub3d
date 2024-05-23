/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller_handle_exit.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:49:58 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 23:24:15 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "engine.h"
#include "controller.h"
#include <math.h>

int	controller_handle_exit(void)
{
	t_engine	*e;

	e = engine_instance();
	mlx_loop_end(e->mlx);
	return (0);
}
