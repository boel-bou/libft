/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:26:27 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/18 16:03:21 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*p;

	i = 0;
	if (s == NULL)
		return (0);
	l = ft_strlen(s);
	while (i + start < l && i < len)
		i++;
	p = malloc(i + 1);
	if (!p)
		return (0);
	l = 0;
	while (i > 0)
	{
		p[l++] = s[start++];
		i--;
	}
	p[l] = '\0';
	return (p);
}
/*
#include <stdio.h>
int main()
{
    const char *original = "";
    unsigned int start = 1;
    size_t len = 1;

    char *sub_string = ft_substr(original, start, len);

    if (sub_string != NULL) {
        printf("Sous-chaîne extraite : %s\n", sub_string);
    } else {
        printf("L'allocation de mémoire a échoué.\n");
    }

    return 0;
}*/
