/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine_instance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:54:19 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 12:54:20 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"

t_engine	*engine_instance(void)
{
	static t_engine	__instance;

	return (&__instance);
}
