/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:37:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 22:52:36 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
# define IMAGE_H

typedef struct s_image
{
	int		bpp;
	void	*img;
	char	*addr;
	int		endian;
	int		line_length;
	int		w;
	int		h;
}	t_image;

t_image	image_init(void *img);
t_image	image_init_empty(int w, int h);
int		image_get_pixel(t_image img, int x, int y);
void	image_set_pixel(t_image *img, int x, int y, int color);

#endif