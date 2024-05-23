/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 07:19:01 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:46:05 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, ULONGLONG len)
{
	ULONGLONG	size_l;

	size_l = ft_strlen(little);
	if (size_l == 0)
		return ((char *)big);
	if (size_l > ft_strlen(big))
		return ((void *)0);
	while (*big && len)
	{
		if (size_l > ft_strlen(big) || len < size_l)
			return ((void *)0);
		if (ft_strncmp(big, little, size_l) == 0 && len >= size_l)
			return ((char *)big);
		big++;
		len--;
	}
	return ((void *)0);
}
