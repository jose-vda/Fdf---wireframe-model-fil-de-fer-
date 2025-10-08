/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 08:25:15 by marvin            #+#    #+#             */
/*   Updated: 2025/04/19 08:25:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*no;

	no = *lst;
	if (*lst)
	{
		while (no -> next)
		{
			no = no->next;
		}
		no->next = new;
	}
	else
	{
		*lst = new;
		return ;
	}
}

/*int	main()
{
	t_list	head = NULL;
	t_list	node1;
	t_list	node2;

	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);

	while(head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	return (0);
}*/
