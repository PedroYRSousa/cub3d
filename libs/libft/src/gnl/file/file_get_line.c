/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_get_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:02:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/20 12:05:47 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "libft.h"
#include <stdlib.h>

char	*file_get_line(int fd)
{
	size_t	end;
	t_file	*file;
	char	*output;
	char	*break_line;

	file = file_get(fd);
	if (!(file->buffer[file->index]))
		return (NULL);
	break_line = ft_strchr(&file->buffer[file->index], '\n');
	if (break_line)
		end = break_line - file->buffer;
	else
		end = BUFFER_SIZE - file->index;
	output = ft_substr(file->buffer, file->index, end - file->index);
	file->index = (break_line - file->buffer) + 1;
	if (file->index >= BUFFER_SIZE)
	{
		ft_bzero(file->buffer, BUFFER_SIZE);
		file->index = 0;
	}
	return (output);
}
