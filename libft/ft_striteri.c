/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:16:56 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/20 17:29:25 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len_s;
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	len_s = ft_strlen(s);
	while (i < len_s)
	{
		f(i, &s[i]);
		i++;
	}
}
