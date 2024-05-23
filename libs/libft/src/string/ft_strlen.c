/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:43:18 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/17 14:20:40 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

ULONGLONG	ft_strlen(const char *s)
{
	ULONGLONG	size;

	size = 0;
	if (s != NULL)
		while (*(s++))
			size++;
	return (size);
}
