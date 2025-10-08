/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_fronto.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:21:31 by marvin            #+#    #+#             */
/*   Updated: 2025/04/17 14:21:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*int main()
{
	t_list *head = NULL;
	t_list *new;
	char str[] = "Eu amo estudar";

	new = ft_lstnew(str);

	ft_lstadd_front(&head, new);

	if (head != NULL)
		printf("%s", (char *)new->content);

	free(new);

	return (0);
}*/
