/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:57:55 by boel-bou          #+#    #+#             */
/*   Updated: 2023/11/18 16:43:38 by boel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*s;
	void	*c;

	s = NULL;
	while (lst && f)
	{
		c = f(lst->content);
		p = ft_lstnew(c);
		if (p == NULL)
		{
			free(c);
			ft_lstclear(&s, del);
			return (NULL);
		}
		ft_lstadd_back(&s, p);
		lst = lst->next;
	}
	return (s);
}
/*
void	*multiply_by_two(void *content)
{

	int *number= (int *)content;
	int *new_number = malloc(sizeof(int));
	*new_number = *number * 2;
	return (new_number);
}

void	free_content(void *content)
{
	free(content);
}

int main()
{
	t_list *lst = malloc(sizeof(t_list));
	lst->content = malloc(sizeof(int));
	*((int *)lst->content) = 5;
	lst->next = NULL;

	t_list *new_lst = ft_lstmap(lst, multiply_by_two, free_content);
	printf("%d\n", *((int *)new_lst->content));

	free(new_lst->content);
	free(new_lst);
	free(lst->content);
	free(lst);

	return (0);
}
*/
