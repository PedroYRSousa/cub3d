/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:37:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 23:26:56 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_H
# define VIEW_H

# include "image.h"

typedef struct s_view
{
	t_image	frame;
	t_image	textures[4];
}	t_view;

int			view_draw(void);
void		view_init(void);
void		view_destroy(void);
t_view		*view_instance(void);
void		view_put_raycast(void);
void		view_put_background(void);

#endif