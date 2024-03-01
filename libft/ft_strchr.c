/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:38:08 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/16 18:15:13 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c < 0)
		return ((char *)s);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int main()
{
	char a = '\0';
	printf("%c", a);
	printf("%s",ft_strchr("rf",'\0'));
	printf("%s",strchr("there is so \0ma\0ny \0 \\0 in t
	\0his stri\0ng !\0\0\0\0",'\0'));
}*/
