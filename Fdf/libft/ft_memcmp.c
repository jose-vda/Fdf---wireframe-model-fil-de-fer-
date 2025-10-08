/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:58:31 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/12 12:13:25 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	char str1[] = "";
	char str2[] = "";

	// Compara os primeiros 13 bytes (tamanho das strings)
	int result = ft_memcmp(NULL, NULL, 13);

	if (result == 0) {
		printf("As duas strings são iguais.\n");
	} else {
		printf("%d", result);
	}

	return (0);
}*/
