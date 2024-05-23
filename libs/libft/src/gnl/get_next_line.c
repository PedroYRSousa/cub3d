/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:49:07 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/07/07 03:54:35 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	char	*rest;
	char	*output;
	char	*aux_output;
	size_t	size;
	ssize_t	result;

	if (fd < 0)
		return (NULL);
	rest = file_get_line(fd);
	if (rest != NULL)
		return (rest);
	result = read(fd, file_get(fd)->buffer, BUFFER_SIZE);
	if (result < 0 || (ft_strlen(rest) == 0 && result == 0))
		return (NULL);
	output = NULL;
	if (result != 0)
	{
		aux_output = file_get_line(fd);
		size = ft_strlen(aux_output);
		output = ft_calloc(size + 1, sizeof(char));
		ft_strlcat(output, aux_output, size + 1);
		free(aux_output);
	}
	return (output);
}
