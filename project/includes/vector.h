/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:37:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 01:38:36 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct s_vector
{
	double	x;
	double	y;
}	t_vector;

t_vector	vector_create(double x, double y);
t_vector	vector_copy(t_vector v);
t_vector	vector_nadd(t_vector v, double n);
t_vector	vector_vadd(t_vector v1, t_vector v2);
t_vector	vector_nmult(t_vector v, double n);
t_vector	vector_vmult(t_vector v1, t_vector v2);
t_vector	vector_nsub(t_vector v, double n);
t_vector	vector_vsub(t_vector v1, t_vector v2);
t_vector	vector_rotate(t_vector v, double rad);

#endif