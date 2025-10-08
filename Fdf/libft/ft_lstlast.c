/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 07:47:09 by marvin            #+#    #+#             */
/*   Updated: 2025/04/19 07:47:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main()
{
	t_list	*head = NULL;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last_node;

	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");
	node3 = ft_lstnew("Node 3");
    
	ft_lstadd_back(&head, node1);   
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	last_node = ft_lstlast(head);
	
	printf("%s\n\n", (char *)last_node->content);	

	return (0);
}*/
