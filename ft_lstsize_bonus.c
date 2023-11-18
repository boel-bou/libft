/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:29:25 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/18 16:14:02 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		count;

	count = 0;
	if (lst == NULL)
		return (0);
	p = lst;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
/*
int main ()
{
	t_list *node1, *node2, *node0;
	int a , b ,c, cmp;
	a = 1;
	b = 2;
	c = 0;
	t_list	**p = NULL;

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
	cmp = ft_lstsize(*p);
	printf("%d\n", cmp);
	while (*p != NULL)
    {
        t_list *temp = *p;
        *p = (*p)->next;
        free(temp);
    }
}*/
