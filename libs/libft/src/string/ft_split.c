/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 12:47:43 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:45:16 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ULONGLONG	get_size(char const *s, char const *aux_s)
{
	ULONGLONG	size;

	size = 0;
	while (s != aux_s)
	{
		size++;
		s++;
	}
	return (size);
}

static ULONGLONG	count_worlds(char const *s, char c)
{
	ULONGLONG	count;

	count = 1;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			count++;
		s++;
	}
	return (++count);
}

static int	add_str(char **m, char const *s, char const *aux_s, ULONGLONG count)
{
	ULONGLONG	index;
	ULONGLONG	size_str;

	size_str = get_size(s, aux_s);
	if (size_str > 0)
	{
		m[count] = (char *)ft_calloc(size_str + 1, sizeof(char));
		if (m[count])
		{
			index = 0;
			while (index < size_str)
			{
				m[count][index] = s[index];
				index++;
			}
		}
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	ULONGLONG	count;
	char const	*aux_s;
	char		**matrix;

	if (!s)
		return ((void *)0);
	aux_s = s;
	count = 0;
	matrix = (char **)ft_calloc(count_worlds(s, c), sizeof(char *));
	if (matrix)
	{
		while (*aux_s)
		{
			if (*aux_s == c)
			{
				count = add_str(matrix, s, aux_s, count);
				s = aux_s + 1;
			}
			aux_s++;
		}
		if (*s != '\0')
			add_str(matrix, s, aux_s, count++);
		matrix[count] = (void *)0;
	}
	return (matrix);
}
