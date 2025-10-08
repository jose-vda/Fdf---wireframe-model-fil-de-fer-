/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:15:11 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/12 16:40:37 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	src_len = 0;
	dest_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0' && dest_len < destsize)
		dest_len++;
	if (dest_len == destsize)
		return (destsize + src_len);
	while (src[i] && (dest_len + i < destsize - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*int main()
{
	char    dest[] = "Eu amo ";
	const char    src[] = "estudar";
	size_t  destsize = sizeof(dest);

	size_t resultado = ft_strlcat(dest, src, destsize);

	printf ("Tamanho de dest: %zu\n", resultado);
	printf("Destino: %s\n", dest);

	return (0);
}*/
