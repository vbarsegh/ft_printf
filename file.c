/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:31:13 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/30 15:45:48 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char c, va_list ap)
{
	if (c == 's')
		return (call_func_string(va_arg(ap, char *)));
	else if (c == 'c')
		return (call_func_char(va_arg(ap, int)));
	else if (c == 'i' || c == 'd')
		return (call_func_int_double(va_arg(ap, int)));
	else if (c == 'u')
		return (call_func_unsigned(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (call_func_x(va_arg(ap, unsigned int)));
	else if (c == 'X')
		return (call_func_x_upper(va_arg(ap, unsigned int)));
	else if (c == 'p')
	{
		write (1, "0x", 2);
		return (call_func_pointer(va_arg(ap, unsigned long)));
	}
	else if (c == '%')
	{
		write (1, "%", 1);
		return (1);
	}
	else
		return (0);
}
