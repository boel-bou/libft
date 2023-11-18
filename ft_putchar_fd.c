/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:44:19 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/17 10:52:06 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int	main()
{
//	int fd = open("sch.c", O_WRONLY | O_CREAT, 0644);
	//printf("%d\n", fd);
	ft_putchar_fd('c', 5);
	write(1, "\n", 1);
	//close(fd);
}*/
