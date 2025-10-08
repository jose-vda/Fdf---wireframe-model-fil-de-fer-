/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 08:17:01 by marvin            #+#    #+#             */
/*   Updated: 2025/04/19 08:17:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	num;

	num = 0;
	while (lst)
	{
		lst = lst->next;
		num++;
	}
	return (num);
}

/*int	main()
{
	int	num;
	t_list	*head = NULL;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	
	node1 = ft_lstnew("node 1");
	node2 = ft_lstnew("node 2");
	node3 = ft_lstnew("node 3");

	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);

	num = ft_lstsize(head);
	
	printf("%d\n\n", num);

	return (0);
}*/
