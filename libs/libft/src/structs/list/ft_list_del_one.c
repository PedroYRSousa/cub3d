/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:38:24 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/04/04 17:22:54 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_del_one(t_list **lst, t_list *target, void (*del)(void *))
{
	t_list	*aux;

	if (lst && (*lst) && target && del)
	{
		del(target->content);
		if ((*lst) == target)
			(*lst) = (*lst)->next;
		else
		{
			aux = (*lst);
			while (aux->next != target)
				aux = aux->next;
			aux->next = target->next;
		}
		free(target);
	}
}
