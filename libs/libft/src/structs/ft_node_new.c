/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:38:24 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/04/07 14:56:18 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_node_new(void *content)
{
	t_list	*new_list;

	new_list = ft_calloc(1, sizeof(t_list));
	new_list->next = ((void *)0);
	new_list->content = content;
	return (new_list);
}
