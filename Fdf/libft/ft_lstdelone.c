/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 09:01:04 by marvin            #+#    #+#             */
/*   Updated: 2025/04/19 09:01:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void del(void *content)
{
    free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*int main()
{
    t_list *node1;
    char *str = "Eu amo estudar!"; 

    node1 = ft_lstnew(str);
    if (!node1)
        return 1;

    printf("ANTES DE DEL\n");
    printf("%s\n\n", (char *)node1->content);

    ft_lstdelone(node1, del);
    node1 = NULL;

    // printf("DEPOIS DE DEL\n");
    // printf("%s\n\n", (char *)node1->content);  // Comentado para evitar erro

    return 0;
}*/
