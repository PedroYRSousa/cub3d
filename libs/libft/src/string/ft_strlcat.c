/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:57:29 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/02/03 02:33:57 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ULONGLONG	ft_strlcat(char *dst, const char *src, ULONGLONG size)
{
	ULONGLONG	count;
	ULONGLONG	s_dst;
	ULONGLONG	s_src;

	count = 0;
	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	if (size <= s_dst)
		return (size + s_src);
	while (dst[count])
		count++;
	while (*src && count < size - 1)
		dst[count++] = *(src++);
	dst[count] = '\0';
	return (s_dst + s_src);
}
