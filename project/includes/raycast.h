/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:37:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 22:34:20 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAYCAST_H
# define RAYCAST_H

# include "vector.h"
# include "engine.h"

typedef struct s_ray
{
	t_vector	step;
	t_vector	ray_dir;
	t_vector	map_pos;
	t_vector	dist_side;
	t_vector	delta_dist;
	t_vector	wall_map_pos;
	t_vector	dda_line_size;
	double		draw_end;
	double		draw_start;
	double		wall_line_height;
	double		perpendicular_dist;
	int			texture;
	int			hit_side;
}	t_ray;

typedef struct s_raycast
{
	t_ray	rays[WIDTH];
}	t_raycast;

t_raycast	*raycast_instance(void);
void		raycast(void);
void		raycast_calc__ray_dir__delta_dist__map_pos(t_ray *ray, int pos_x);
void		raycast_calc__dist_side___step(t_ray *ray);
void		raycast_calc__dda_line_size__hit_side__wall_map_pos(t_ray *ray);
void		raycast_calc__perpendicular_dist__draw_start_end(t_ray *ray);
void		raycast_calc__texture(t_ray *ray);

#endif