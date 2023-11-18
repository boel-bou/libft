/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:06:01 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/16 12:57:01 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	t_list *node1, *node2, *node0;
	int a , b ,c;
	a = 1;
	b = 2;
	c = 0;
	t_list	**p = NULL;
	t_list *tmp;

	node1 = (t_list *)malloc(sizeof(t_list));
	if (!node1)
		return 0;
	p = &node1;
	node1->content = &a;
	node1->next = NULL;

	node2 = (t_list *)malloc(sizeof(t_list));
	if (!node2)
		return 0;
	node1->next = node2;
	node2->content = &b;
	node2->next = NULL;

	node0 = (t_list *)malloc(sizeof(t_list));
	if (!node0)
		return 0;
	node0->content = &c;
	node0->next = NULL;
	ft_lstadd_front(p, node0);

	tmp = *p;
	while (tmp)
	{
		printf("%d\n", *((int *)tmp->content));
		tmp = tmp->next;
	}
  	while (*p != NULL)
    {
        t_list *temp = *p;
        *p = (*p)->next;
        free(temp);
    }
}
*/
