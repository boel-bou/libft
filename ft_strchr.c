/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:44:03 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/07 15:43:02 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] || s[i] == (char)c)
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	char *str= NULL;
	printf("%s\n", strchr(str, 'c'));
}*/
