/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:37:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/07/07 03:36:28 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "vector.h"

# ifndef COLOR_RED
#  define COLOR_RED 0x0
# endif
# ifndef COLOR_GREEN
#  define COLOR_GREEN 0x1
# endif
# ifndef COLOR_BLUE
#  define COLOR_BLUE 0x2
# endif

# ifndef TEXTURE_NO
#  define TEXTURE_NO 0x0
# endif
# ifndef TEXTURE_SO
#  define TEXTURE_SO 0x1
# endif
# ifndef TEXTURE_EA
#  define TEXTURE_EA 0x2
# endif
# ifndef TEXTURE_WE
#  define TEXTURE_WE 0x3
# endif

typedef struct s_game
{
	t_vector	pos;
	t_vector	dir;
	t_vector	plane;
	char		**map;
	int			ceill_color[3];
	int			floor_color[3];
	char		*textures_path[4];
}	t_game;

void	game_destroy(void);
t_game	*game_instance(void);
int		game_get_color(const int colors[3]);
void	game_init(char *map_path);
void	game_set_color(char	*line);
void	game_set_texture(char *line);
void	game_set_map(char *line);
void	game_check_map(void);
void	game_set_player(void);

#endif
