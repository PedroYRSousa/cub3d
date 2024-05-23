/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:37:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 23:27:08 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_H
# define ENGINE_H

# ifndef WIDTH
#  define WIDTH 640
# endif
# ifndef HEIGHT
#  define HEIGHT 480
# endif
# ifndef TEXT_WIDTH
#  define TEXT_WIDTH 64
# endif
# ifndef TEXT_HEIGHT
#  define TEXT_HEIGHT 64
# endif

typedef struct s_engine
{
	void	*mlx;
	void	*window;
}	t_engine;

void		engine_init(void);
void		engine_destroy(void);
t_engine	*engine_instance(void);

#endif