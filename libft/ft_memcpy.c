/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:39:31 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/17 20:50:45 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((const unsigned char *)src + i);
		i++;
	}
	return (dest);
}
/*int main()
{
	char  ptr[13] = "idc";
	const char a[10] = "";
	ft_memcpy(ptr,a,3);
	printf("%s\n", ptr);
}*/
