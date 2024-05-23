/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_init_empty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:58:11 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 13:00:21 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "image.h"
#include "engine.h"

t_image	image_init_empty(int w, int h)
{
	t_image		img;
	t_engine	*e;

	e = engine_instance();
	img.img = mlx_new_image(e->mlx, w, h);
	img = image_init(img.img);
	return (img);
}
