/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:01:18 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/15 18:18:23 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	int		i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	arr = (char *)malloc(sizeof(char) * (i + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(arr + i) = *(s + i);
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
