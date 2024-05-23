/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:37:06 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/05/26 23:23:00 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROLLER_H
# define CONTROLLER_H

# ifndef SPEED
#  define SPEED 0.5
# endif
# ifndef SPEED_STRAFE
#  define SPEED_STRAFE 0.5
# endif
# ifndef SPEED_ROTATE
#  define SPEED_ROTATE 0.174533f
# endif

void	controller_init(void);
int		controller_handle_exit(void);
int		controller_handle_key_press(int key_code);

#endif