/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_get_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:32:58 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/07/07 03:36:18 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	game_get_color(const int colors[3])
{
	return (colors[COLOR_RED] * 256 * 256
		+ colors[COLOR_GREEN] * 256
		+ colors[COLOR_BLUE]);
}
