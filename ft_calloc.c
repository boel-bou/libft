/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:51:28 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/15 16:38:06 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size && (count > (SIZE_MAX / size)))
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main() {
	//char str[] = "abcd";
	printf("%s\n",ft_calloc(4 ,(size_t) (-4)));
	//printf("%s\n", ft_calloc(INT_MAX, INT_MAX));
}*/
