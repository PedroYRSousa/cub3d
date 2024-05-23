/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 02:09:37 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:46:32 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_newstr(unsigned int start, ULONGLONG size_s, ULONGLONG len)
{
	char		*new_str;
	ULONGLONG	last_index;

	if (start > size_s)
		last_index = 0;
	else if (size_s - start < len)
		last_index = size_s - start;
	else
		last_index = len;
	new_str = ft_calloc(last_index + 1, sizeof(char));
	if (new_str)
		new_str[last_index] = 0;
	return (new_str);
}

char	*ft_substr(char const *s, unsigned int start, ULONGLONG len)
{
	ULONGLONG	count;
	ULONGLONG	size_s;
	char		*new_str;

	if (!s)
		return ((void *)0);
	size_s = ft_strlen(s);
	new_str = get_newstr(start, size_s, len);
	if (new_str)
	{
		count = 0;
		if (start <= ft_strlen(s))
		{
			while (count < len && s[start + count])
			{
				new_str[count] = s[start + count];
				count++;
			}
		}
	}
	return (new_str);
}
