/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:21:45 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/14 18:43:55 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*cpy_src;
	unsigned char		*cpy_dest;

	i = 0;
	cpy_src = (unsigned char *) src;
	cpy_dest = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (dest);
	if (cpy_dest < cpy_src)
	{
		while (i < n)
		{
			cpy_dest[i] = cpy_src[i];
			i++;
		}
		return (dest);
	}
	while (n > 0)
	{
		cpy_dest[n - 1] = cpy_src[n - 1];
		n--;
	}
	return (dest);
}
/*#include <string.h>
int main()
{
	char  ptr[13] = "asdf";
	const char a[10] = NULL;
	ft_memmove(ptr,a,3);
	printf("%s\n", ptr);
	memmove(ptr,a,3);
	printf("%s",ptr);
}*/
