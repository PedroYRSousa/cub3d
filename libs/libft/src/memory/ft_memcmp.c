/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:36:25 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/02/03 04:42:38 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, ULONGLONG n)
{
	const char	*_s1;
	const char	*_s2;

	_s1 = (const char *)s1;
	_s2 = (const char *)s2;
	while (n-- > 0)
	{
		if (*_s1 != *_s2)
			return ((unsigned char)*_s1 - (unsigned char)*_s2);
		_s1++;
		_s2++;
	}
	return (0);
}
