/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:57:19 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/17 20:31:37 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (i < size - 1 && src[i] != '\0' )
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "fr";
    char dst[2] = "";
    printf("%ld\n", ft_strlcpy(dst, str, 2));
    printf("%ld\n", strlcpy(dst, str, 2));
    printf ("%s\n", dst);
}*/
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "fr";
	char dst[2] = "";
	printf("%ld\n", ft_strlcpy(dst, str, 2));
	printf("%ld\n", strlcpy(dst, str, 2));
	printf ("%s\n", dst);
}*/
