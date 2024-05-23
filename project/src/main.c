/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:35:15 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 02:31:23 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "game.h"
#include "view.h"
#include "system.h"
#include "engine.h"
#include "controller.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		system_error(ERROR_MISUSE);
	game_init(argv[argc - 1]);
	engine_init();
	view_init();
	controller_init();
	mlx_loop(engine_instance()->mlx);
	view_destroy();
	engine_destroy();
	game_destroy();
	return (0);
}
