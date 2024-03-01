/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:47:43 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/27 18:50:26 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	size_src;
	size_t	len_dest;

	if (!dest && dest_size == 0)
		return (0);
	j = 0;
	size_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (len_dest > dest_size)
		return (dest_size + size_src);
	if (dest_size == 0)
		return (size_src);
	i = len_dest;
	while (src[j] != '\0' && i < (dest_size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + size_src);
}
