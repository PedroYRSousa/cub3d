/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:37:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/27 03:30:56 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYSTEM_H
# define SYSTEM_H

# ifndef ERROR_MLX
#  define ERROR_MLX 0x0F
# endif
# ifndef ERROR_MISUSE
#  define ERROR_MISUSE 0x10
# endif
# ifndef ERROR_FD
#  define ERROR_FD 0x11
# endif
# ifndef ERROR_EXTENSION
#  define ERROR_EXTENSION 0x12
# endif
# ifndef ERROR_COLOR
#  define ERROR_COLOR 0x13
# endif
# ifndef ERROR_TEXTURE
#  define ERROR_TEXTURE 0x14
# endif
# ifndef ERROR_MAP
#  define ERROR_MAP 0x15
# endif

void	system_error(int code_error);

#endif