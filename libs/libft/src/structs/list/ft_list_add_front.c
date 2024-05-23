/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:38:24 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/04/04 16:43:43 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_add_front(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!(*lst))
		(*lst) = new;
	else
	{
		aux = (*lst);
		(*lst) = new;
		new->next = aux;
	}
}
