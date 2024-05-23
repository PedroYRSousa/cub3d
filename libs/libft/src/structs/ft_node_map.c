/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_node_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:38:24 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/04/07 15:02:37 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_node_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new_list;

	new_list = ((void *)0);
	if (lst)
	{
		while (lst)
		{
			aux = lst;
			lst = lst->next;
			if (f)
				ft_list_add_back(&new_list, ft_list_new(f(aux->content)));
			else
				ft_list_add_back(&new_list, ft_list_new(aux->content));
			if (del)
				del(lst->content);
			free(aux);
		}
	}
	return (new_list);
}
