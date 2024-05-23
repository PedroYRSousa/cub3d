/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_draw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:15:01 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/28 04:58:33 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "view.h"
#include "engine.h"

int	view_draw(void)
{
	t_view		*v;
	t_engine	*e;

	v = view_instance();
	e = engine_instance();
	mlx_clear_window(e->mlx, e->window);
	view_put_background();
	view_put_raycast();
	mlx_put_image_to_window(e->mlx, e->window, v->frame.img, 0, 0);
	return (0);
}
