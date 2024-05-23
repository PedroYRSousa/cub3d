/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:04:45 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/02/03 04:15:46 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(ULONGLONG nmemb, ULONGLONG size)
{
	void	*output;

	output = malloc(nmemb * size);
	if (output)
		ft_bzero(output, nmemb * size);
	return (output);
}
