/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:32:46 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/20 17:34:18 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*arr;

	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len + start)
		i = ft_strlen(s) - start +1;
	else
		i = len + 1;
	if (start >= ft_strlen(s))
		i = 1;
	arr = malloc(sizeof(char) * i);
	if (!arr)
		return (NULL);
	while (j < i - 1)
	{
		arr[j] = s[start + j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
