/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:53:01 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/16 17:49:42 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*arr;
	unsigned int	j;
	unsigned int	c;

	j = 0;
	c = 0;
	if (!s1 || !s2)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!arr)
		return (NULL);
	while (j < ft_strlen(s1))
	{
		arr[j] = s1[j];
		j++;
	}
	while (c < ft_strlen(s2))
	{
		arr[j++] = s2[c];
		c++;
	}
	arr[j] = '\0';
	return (arr);
}
