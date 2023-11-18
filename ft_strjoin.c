/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:19:24 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/18 15:19:59 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cat_strs(const char *dest, const char *src, char *s)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		s[k++] = dest[i++];
	while (src[j])
		s[k++] = src[j++];
	s[k] = '\0';
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*p;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	p = malloc(l2 + l1 + 1);
	if (!p)
		return (0);
	p = cat_strs(s1, s2, p);
	return (p);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strjoin("bouchra", NULL));

}*/
