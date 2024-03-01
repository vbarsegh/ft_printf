/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:29:43 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/28 19:41:15 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *arr, ...);
int	check(char c, va_list ap);
int	call_func_string(char *s);
int	call_func_char(char c);
int	call_func_int_double(int num);
int	call_func_unsigned(unsigned int num);
int	call_func_x(unsigned int num);
int	call_func_x_upper(unsigned int num);
int	call_func_pointer(unsigned long num);

#endif
