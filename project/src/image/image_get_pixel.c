/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_get_pixel.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:01:43 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 13:02:55 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "image.h"

int	image_get_pixel(t_image img, int x, int y)
{
	char	*dst;

	dst = img.addr + (y * img.line_length + x * (img.bpp / 8));
	return (*(unsigned int *)dst);
}
