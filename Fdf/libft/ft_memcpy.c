/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:29:18 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 18:54:49 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*s1;
	char		*s2;

	if (dst == src)
		return (dst);
	i = 0;
	s1 = (char *)src;
	s2 = (char *)dst;
	while (i < n)
	{
		((unsigned char *)s2)[i] = ((unsigned char *)s1)[i];
		i++;
	}
	return (dst);
}

/*int main()
{
	char origem[] = "Eu amo estudar";
	char destino[50];

	// Copia os primeiros 5 bytes da string 'origem' para 'destino'
	ft_memcpy(origem, destino, 5);

	printf("Destino: %s\n", destino);  // Vai imprimir "Exemplo de me"

	return (0);
}*/
