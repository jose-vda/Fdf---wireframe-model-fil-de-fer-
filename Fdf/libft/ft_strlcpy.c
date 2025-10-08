/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:14:00 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 19:14:03 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		srcsize;
	const char	*seg;

	i = 0;
	srcsize = 0;
	seg = src;
	while (seg[srcsize])
		srcsize++;
	if (size > 0)
	{
		while ((i < size - 1) && (i < srcsize))
		{
			dst[i] = seg[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*int main()
{
	char    dst[10];
	const char    src[] = "EU amo";
	size_t  size = 10;

	printf ("Tamanho de src: %zu\n", ft_strlcpy(dst, src, size));
	printf("Destino: %s\n", dst);

	return (0);
}*/
