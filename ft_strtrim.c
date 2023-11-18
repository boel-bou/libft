/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:43:55 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/07 14:01:17 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		l;
	int		j;

	if (!s1)
		return (NULL);
	i = 0;
	while (ft_check(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	l = ft_strlen(s1);
	while (ft_check(set, s1[l - 1]))
		l--;
	p = (char *)malloc(l - i + 1);
	if (!p)
		return (0);
	j = 0;
	while (i < l)
		p[j++] = s1[i++];
	p[j] = '\0';
	return (p);
}		
/*
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n", ft_strtrim("\n\t\t   \n\n  \t\t", "\t\n "));
}*/
