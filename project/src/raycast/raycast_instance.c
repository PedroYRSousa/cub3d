/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:49:33 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 19:54:30 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"
#include "raycast.h"

t_raycast	*raycast_instance(void)
{
	static t_raycast	__instance;

	return (&__instance);
}
