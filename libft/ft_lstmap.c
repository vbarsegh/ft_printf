/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:56:34 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/23 12:58:23 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res_lst;
	t_list	*ptr;

	res_lst = NULL;
	if (!del || !f)
		return (NULL);
	while (lst)
	{
		ptr = ft_lstnew((*f)(lst -> content));
		if (!ptr)
		{
			ft_lstclear(&res_lst, (*del));
			return (NULL);
		}
		ft_lstadd_back(&res_lst, ptr);
		lst = lst->next;
	}
	return (res_lst);
}
/*void	*func(void *s)
{
	if (s)
		return (ft_strdup("OK !"));
	return (NULL);
}
#include <stdio.h>

int	main(void)
{
	t_list *l = ft_lstnew(ft_strdup(" 1 2 3 "));
	t_list *ret;

	l->next = ft_lstnew(ft_strdup("ss"));
	l->next->next = ft_lstnew(ft_strdup("-_-"));
	ret = ft_lstmap(l, func, free);
	while (ret)
	{
		printf("%s\n", ret->content);
		ret = ret->next;
	}
	if (!ret)
		printf("ERROR");
}*/
