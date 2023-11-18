/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:05:58 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/14 18:04:22 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	l;

	l = ft_strlen(s);
	p = (char *)malloc(l + 1);
	if (p == NULL)
		return (0);
	ft_strcpy(p, (char *)s);
	return (p);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "boushra";
	printf("%s\n", strdup(str));
}*/
