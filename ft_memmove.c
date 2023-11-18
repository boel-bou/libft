/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:59:17 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/18 15:03:04 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	if (dest > src)
	{
		while (n - i > 0)
		{
			((char *)dest)[n - 1 - i] = ((char *)src)[n -1 - i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
			n--;
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main() {
	char str[] = "abcde";
	char str1[] = "abcde";
	printf("%s\n", ft_memmove(str , str + 2, 3));
	printf("%s\n", memmove(str1, str1 + 2, 3));
}*/
