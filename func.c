/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:28:26 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/28 19:27:27 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	call_func_string(char *s)
{
	int	len_s;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len_s = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len_s);
}

int	call_func_char(char c)
{
	int	len_char;

	len_char = 1;
	ft_putchar_fd(c, 1);
	return (len_char);
}

int	call_func_int_double(int num)
{
	int	len_num;

	len_num = 0;
	ft_putnbr_fd(num, 1);
	if (num <= 0)
		len_num = 1;
	while (num != 0)
	{
		len_num++;
		num /= 10;
	}
	return (len_num);
}

int	call_func_unsigned(unsigned int num)
{
	int				len_num;
	unsigned int	num_copy;

	num_copy = num;
	len_num = 0;
	if (num < 0)
	{
		write (1, "4294967295", 1);
		return (10);
	}
	if (num == 0)
		len_num++;
	if (num > 9)
	{
		call_func_unsigned(num / 10);
		call_func_unsigned(num % 10);
	}
	else
		ft_putchar_fd((num + 48), 1);
	while (num_copy != 0)
	{
		len_num++;
		num_copy /= 10;
	}
	return (len_num);
}
