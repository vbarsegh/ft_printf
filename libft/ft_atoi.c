/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:20:25 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/16 12:17:04 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	poc;
	int	count;

	poc = 1;
	i = 0;
	result = 0;
	count = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			poc = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		result = (nptr[i++] - 48) + (result * 10);
	return (result * poc);
}
/*#include<stdlib.h>
int main()
{
	char *n ="0345";
	int a=ft_atoi(n);
	printf("%d\n",a);
	int b=atoi(n);
	printf("%d",b);

}*/
