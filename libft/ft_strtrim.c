/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarsegh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:49:57 by vbarsegh          #+#    #+#             */
/*   Updated: 2024/01/20 17:36:38 by vbarsegh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<string.h>
int	check1(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*arr;
	int		start;
	int		j;
	int		end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	j = 0;
	while (s1[start] != '\0' && check1(s1[start], set) == 1)
		start++;
	while (check1(s1[end - 1], set) == 1 && end >= start)
		end--;
	arr = malloc(sizeof(char) * (end - start + 1));
	if (!arr)
		return (NULL);
	while (start < end)
		arr[j++] = s1[start++];
	arr[j] = '\0';
	return (arr);
}
/*int main()
{
	char *s1="   \t  \n\n \t\t  \n\n\nHi
	ello \t  Please\n Trim me !\n       \n \n \t\t\n  ";
	char *s2="Hello \t  Please\n Trim me !";
	char *a=ft_strtrim(s1," \n\t");
	printf("%s",a);
	char *b=strtrim(s1," \n\t");
	printf("%s",b);
}
*/
