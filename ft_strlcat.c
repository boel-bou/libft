/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:17:20 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/15 16:21:52 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	i = 0;
	if (!dst && size == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst || size == 0)
		return (len_src + size);
	j = len_dst;
	while (src[i] != '\0' && i < size - len_dst - 1)
	{
		((char *)dst)[j] = ((char *)src)[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
	// char dest[5] = "ab";
	// char dest2[5] = "ab";
	char *source = "cd";
	char *source2 = "cd";
	size_t resultat = strlcat(NULL, source, 0);
	size_t resultat2 = ft_strlcat(NULL, source2, 0);
	printf("%ld\n", resultat);
	printf("%ld\n", resultat2);
}*/
