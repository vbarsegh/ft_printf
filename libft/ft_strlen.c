/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:29:22 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/11 18:40:11 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int		i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i++] != '\0')
		count++;
	return (count);
}
/*#include<stdio.h>
int main()
{
	char a[]="barevv v";
	size_t b=ft_strlen(a);
	printf("%zu",b);
}*/
