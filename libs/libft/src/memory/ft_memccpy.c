/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:15:42 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:44:41 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, ULONGLONG n)
{
	unsigned char	*_src;
	unsigned char	*_dest;

	_src = (unsigned char *)src;
	_dest = (unsigned char *)dest;
	while (n-- > 0)
	{
		*(_dest++) = *_src;
		if (*_src == (unsigned char)c)
			return (_dest);
		_src++;
	}
	return ((void *)0);
}
