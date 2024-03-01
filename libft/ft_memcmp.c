/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:30:43 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/14 19:08:26 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*cpy_s1;
	const unsigned char	*cpy_s2;

	cpy_s1 = (unsigned char *)s1;
	cpy_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*cpy_s1 != *cpy_s2)
			return (*(cpy_s1) - *(cpy_s2));
		i++;
		cpy_s1++;
		cpy_s2++;
	}
	return (0);
}
/*#include <string.h>
int main()
{
	char a[]="atoms\0b\0\0";
	char b[]="atoms\0abc";
	int c=ft_memcmp(a,b,7);
	printf("%d",c);
	int d=memcmp(a,b,7);
	printf("%d",d);
}*/
