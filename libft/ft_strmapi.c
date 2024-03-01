/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:45:09 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/20 17:30:29 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	unsigned int	len_s;
	unsigned int	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	arr = malloc(sizeof(char) * (len_s + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
