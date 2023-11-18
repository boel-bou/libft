/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:12:29 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/16 10:43:11 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (del == NULL || lst == NULL)
		return ;
	while (*lst != NULL)
	{
		p = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(p);
	}
	*lst = NULL;
}
