/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:15:25 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:44:57 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, ULONGLONG n)
{
	const char	*str;

	str = (const char *)s;
	while (n-- > 0)
	{
		if (*str == (c % 256))
			return ((void *)(str));
		else
			str++;
	}
	return ((void *)0);
}
