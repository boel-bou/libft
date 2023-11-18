/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:55:16 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/18 18:53:30 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && len == 0)
		return (NULL);
	if (!(*little))
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] && little[j] == big[i + j]
			&& i + j < len)
				j++;
		if (j == ft_strlen(little))
			return (((char *)big + i));
		i++;
	}
	return (0);
}
/*
int main()

{
	char *s1 = "oh no not the empty string !";
 	char *s2 = "not";
 	size_t max = 0;
 	char *i1 = strnstr(s1, s2, max);
 	char *i2 = ft_strnstr(s1, s2, max);
	printf("%s\n", i1);
	printf("%s\n", i2);
}*/
