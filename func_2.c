/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:46:45 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/28 19:42:22 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	call_func_x(unsigned int num)
{
	unsigned int	num_copy;
	int				len;

	num_copy = num;
	len = 0;
	if (num >= 16)
	{
		call_func_x(num / 16);
		call_func_x(num % 16);
	}
	else if (num > 9)
	{
		ft_putchar_fd((num + 'a' - 10), 1);
	}
	else
		ft_putchar_fd(num + 48, 1);
	if (num_copy == 0)
		return (len + 1);
	while (num_copy != 0)
	{
		len++;
		num_copy /= 16;
	}
	return (len);
}

int	call_func_x_upper(unsigned int num)
{
	unsigned int	num_copy;
	int				len;

	num_copy = num;
	len = 0;
	if (num >= 16)
	{
		call_func_x_upper(num / 16);
		call_func_x_upper(num % 16);
	}
	else if (num > 9)
	{
		ft_putchar_fd((num + 'A' - 10), 1);
	}
	else
		ft_putchar_fd(num + 48, 1);
	if (num_copy == 0)
		return (len + 1);
	while (num_copy != 0)
	{
		len++;
		num_copy /= 16;
	}
	return (len);
}

int	call_func_pointer(unsigned long num)
{
	unsigned long	num_copy;
	int				len;

	num_copy = num;
	len = 2;
	if (num >= 16)
	{
		call_func_pointer((num / 16));
		call_func_pointer((num % 16));
	}
	else if (num > 9)
		ft_putchar_fd((num + 'a' - 10), 1);
	else
		ft_putchar_fd(num + 48, 1);
	if (num_copy == 0)
		return (len + 1);
	while (num_copy != 0)
	{
		len++;
		num_copy /= 16;
	}
	return (len);
}
