/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:55:21 by marvin            #+#    #+#             */
/*   Updated: 2025/04/17 12:55:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (new == NULL)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int main()
{
	char    *str;
	t_list  *element;

	str = malloc(sizeof(char) * 8);
	if (str == NULL)
        return (1);

	str = ft_strdup("josevic");

	element = ft_lstnew(str);

	printf("%s\n", (char *)element->content);

	free(str);      // libera a string
	free(element);  // libera o nó da lista

	return (0);
}*/
