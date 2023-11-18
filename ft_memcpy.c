/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:21:21 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/18 15:02:40 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*d;

	p = (char *)dest;
	d = (char *)src;
	i = 0;
	if (d == NULL && p == NULL)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	while (i < n)
	{
		p[i] = d[i];
		i++;
	}
	return (p);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[6] = "12345";
// 	// printf("%s\n", ft_memcpy(dest , str1, 3));
// 	printf("%s\n", ft_memcpy((char *)str , str , 5));
// }
