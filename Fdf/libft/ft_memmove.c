/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:15:28 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 19:21:34 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*origem;
	char	*destino;
	size_t	i;

	if (dst == src)
		return (dst);
	origem = (char *)src;
	destino = (char *)dst;
	i = 0;
	if (destino > origem)
		while (n--)
			destino[n] = origem[n];
	else if (destino <= origem)
	{
		while (i < n)
		{
			destino[i] = origem[i];
			i++;
		}
	}
	return (dst);
}

/*int main()
{
	char src[] = "Eu amo estudar";
	char dest[] = "Eu amo treinar";

	printf("Antes da cópia: %s\n", dest);

	ft_memmove(dest + 3, src, 10);

	printf("Depois da cópia: %s\n", dest);

	return (0);
}*/
