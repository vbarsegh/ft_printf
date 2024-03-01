/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:38:11 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/28 19:37:41 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *arr, ...)
{
	int		i;
	int		len;
	va_list	ap;

	va_start(ap, arr);
	i = 0;
	len = 0;
	while (arr[i])
	{
		if (arr[i] == '%')
		{
			i++;
			len += check(arr[i], ap);
			i++;
		}
		else
		{
			write (1, &arr[i], 1);
			i++;
			len++;
		}
	}
	va_end(ap);
	return (len);
}
