/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:15:42 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/02/03 04:39:24 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, ULONGLONG n)
{
	char		*_dest;
	const char	*_src;

	_dest = (char *)dest;
	_src = (const char *)src;
	if (_dest == _src)
		return (_dest);
	if (_dest > _src)
	{
		while (n-- > 0)
			*(_dest + n) = *(_src + n);
	}
	else
	{
		while (n-- > 0)
			*(_dest++) = *(_src++);
	}
	return (dest);
}
