/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:58:11 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 04:07:28 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "image.h"
#include "system.h"

t_image	image_init(void *img)
{
	t_image	image;

	if (!img)
		system_error(ERROR_MLX);
	image.img = img;
	image.addr = mlx_get_data_addr(image.img, &image.bpp,
			&image.line_length, &image.endian);
	return (image);
}
