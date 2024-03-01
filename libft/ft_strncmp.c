/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:19:29 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/29 20:57:15 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s2 != '\0' || *s1 != '\0') && n > 0)
	{
		if (*s1 == *s2)
		{
			n--;
			s1++;
			s2++;
		}
		else
			return (*((unsigned char *)s1) - *((unsigned char *)s2));
	}
	return (0);
}
