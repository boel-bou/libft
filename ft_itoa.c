/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:43:25 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/06 17:46:07 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_num(char *s, long n, int h)
{
	int	i;

	i = 1;
	while (n > 0)
	{
		s[h - i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
}

static int	count_lenght(long n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_positive(long a)
{
	int		h;
	char	*s;

	h = count_lenght(a);
	s = malloc(h + 1);
	if (s == NULL)
		return (NULL);
	copy_num(s, a, h);
	s[h] = '\0';
	return (s);
}

static char	*ft_negative(long a)
{
	int		h;
	char	*s;

	h = count_lenght(a);
	s = malloc(h + 2);
	if (s == NULL)
		return (NULL);
	s[0] = '-';
	copy_num(s, a, h + 1);
	s[h + 1] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		h;
	long	nbr;

	nbr = (long)n;
	h = count_lenght(nbr);
	if (n == 0)
	{
		num = malloc(2);
		if (num == NULL)
			return (NULL);
		num[0] = '0';
		num [1] = '\0';
	}
	else if (nbr > 0)
		num = ft_positive(nbr);
	else
	{
		num = ft_negative(-nbr);
	}
	return (num);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{

  printf("%s\n", ft_itoa(-0));
}*/
