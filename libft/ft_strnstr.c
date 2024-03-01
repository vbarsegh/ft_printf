/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:17:48 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/20 17:30:59 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0')
	{
		j = 0;
		if ((i + j) >= len)
			return (NULL);
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
			if ((i + j) >= len)
				return (NULL);
		}
		i++;
	}
	return (NULL);
}
/*#include <string.h>
int main()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	printf("%s",i1);
	char *i2 = ft_strnstr(s1, s2, max);
	printf("%s",i2);
}*/
