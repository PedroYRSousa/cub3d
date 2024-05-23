/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:38:47 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 01:39:14 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector_create(double x, double y)
{
	t_vector	new_v;

	new_v.x = x;
	new_v.y = y;
	return (new_v);
}
