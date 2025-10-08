/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:11:52 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/16 16:45:41 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < n)
	{
		if (p[i] == (unsigned char)value)
			return (p + i);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char str[] = "eu amo estudar";

	// Procurar o byte 'e' (como inteiro)
	char *result = ft_memchr(str, 'a', sizeof(str));

	if (result != NULL)
		printf("Primeira ocorrência de 'e' encontrada em: %s\n", result);
	else
		printf("Valor não encontrado.\n");

	return (0);
}*/
