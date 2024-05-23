/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:38:47 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 01:40:08 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector_nadd(t_vector v, double n)
{
	t_vector	new_v;

	new_v.x = v.x + n;
	new_v.y = v.y + n;
	return (new_v);
}

t_vector	vector_vadd(t_vector v1, t_vector v2)
{
	t_vector	new_v;

	new_v.x = v1.x + v2.x;
	new_v.y = v1.y + v2.y;
	return (new_v);
}
