/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:33:33 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/20 17:24:59 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*arr;

	arr = NULL;
	if ((nmemb > 65536 && size != 0)
		|| (size > 65536 && nmemb != 0))
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, nmemb * size);
	return ((char *)arr);
}
/*int main()
{
 //   int size = 8539;
      void * d1 = ft_calloc(3, sizeof(char));
	  printf("%s\n",d1);
     void * d2 = calloc(3, sizeof(char));
	 printf("%s",d2);
}*/
