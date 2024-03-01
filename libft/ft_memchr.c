/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:40:37 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/15 15:36:20 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*#include <string.h>
int main()
{
	char p[]="";
	char *d=ft_memchr(p,'\0',3);
	printf("%s",d);
	char *e=memchr(p,'\0',3);
	printf("%s",e);
}*/
