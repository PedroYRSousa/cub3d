/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:38:24 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/04/04 17:06:07 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_add_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!(*lst))
		ft_list_add_front(lst, new);
	else
	{
		aux = (*lst);
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
}
