/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:19:38 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/02/03 02:34:52 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static UINT	ft_get_size(UINT n, int is_negative)
{
	UINT	size;

	size = 1;
	if (is_negative)
		size++;
	if (n == 0)
		size++;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static UINT	ft_get_number(int n, int *is_negative)
{
	if (n < 0)
	{
		*is_negative = TRUE;
		return ((UINT)(n * -1));
	}
	else
	{
		*is_negative = FALSE;
		return ((UINT)(n));
	}
}

char	*ft_itoa(int n)
{
	UINT	_n;
	UINT	size;
	char	*buffer;
	int		is_negative;

	_n = ft_get_number(n, &is_negative);
	size = ft_get_size(_n, is_negative);
	buffer = (char *)ft_calloc(size, sizeof(char));
	if (buffer)
	{
		if (is_negative)
			buffer[0] = '-';
		size -= 2;
		while (_n >= 10)
		{
			buffer[size--] = (char)(_n % 10 + '0');
			_n /= 10;
		}
		buffer[size] = (char)(_n + '0');
	}
	return (buffer);
}
