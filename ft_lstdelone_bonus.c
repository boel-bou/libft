/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:56:50 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/18 16:43:26 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	simple_del(void *s)
{
	free(s);
}

int main ()
{
	char *content;
	content = ft_strdup("Hello, world!");
    t_list *myList = ft_lstnew(content);

    printf("%s\n", (char *)myList->content);
    ft_lstdelone(myList, &simple_del);
    return 0;
}*/
