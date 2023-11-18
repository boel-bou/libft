/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:01:25 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/14 01:24:43 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include<stdio.h>
#include <string.h>

int main ()
{
	char str1[] = { 'à', 'é', 'ü', 'ÿ' };
       char str2[] = "abce";
    printf("%d\n", ft_strncmp(str1,str2, 4));
    printf("%d\n", strncmp(str1,str2, 4));
	//printf("%u\n", str2[0]);
}*/
