/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:00:19 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:45:49 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	ULONGLONG	index_s1;
	ULONGLONG	index_s2;
	char		*new_str;

	if (!s1 || !s2)
		return ((void *)0);
	new_str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
	if (new_str)
	{
		index_s1 = 0;
		index_s2 = 0;
		while (*s1)
		{
			new_str[index_s1] = *s1;
			s1++;
			index_s1++;
		}
		while (*s2)
		{
			new_str[index_s1 + index_s2] = *s2;
			s2++;
			index_s2++;
		}
	}
	return (new_str);
}
