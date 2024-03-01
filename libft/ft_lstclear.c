/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:00:40 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/23 13:00:11 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (lst)
	{
		while (*lst)
		{
			a = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = a;
		}
	}
}
