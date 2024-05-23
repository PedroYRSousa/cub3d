/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:50:09 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 18:07:00 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8192
# endif

typedef struct s_file
{
	unsigned long	index;
	char			buffer[BUFFER_SIZE];
}	t_file;

t_file	*file_get(int fd);
t_file	*file_instance(void);
char	*file_get_line(int fd);
char	*get_next_line(int fd);

#endif
