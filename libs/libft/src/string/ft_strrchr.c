/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 08:16:42 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:46:13 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*output;

	output = (void *)0;
	while (*s)
	{
		if (*s == (c % 256))
			output = s;
		s++;
	}
	if (*s == (c % 256))
		output = s;
	return ((char *)output);
}
