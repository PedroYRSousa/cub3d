/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:38:47 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 01:41:59 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <math.h>

t_vector	vector_rotate(t_vector v, double rad)
{
	t_vector	new_v;

	new_v.x = v.x * cos(rad) - v.y * sin(rad);
	new_v.y = v.x * sin(rad) + v.y * cos(rad);
	return (new_v);
}
