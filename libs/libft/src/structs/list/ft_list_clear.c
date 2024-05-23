/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:38:24 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/04/04 17:43:22 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_clear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (lst && (*lst) && del)
	{
		while ((*lst))
		{
			aux = (*lst);
			(*lst) = (*lst)->next;
			del(aux->content);
			free(aux);
		}
	}
}
