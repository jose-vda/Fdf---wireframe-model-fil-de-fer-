/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 13:26:50 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/16 16:35:00 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (nmemb == 0 || size == 0)
		ptr = malloc(0);
	else if (nmemb <= ((size_t) - 1) / size)
		ptr = malloc(nmemb * size);
	else
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/*int main()
{
	size_t n = 5;
	size_t i = 0;

	int *arr = (int *)ft_calloc(n, sizeof(int));

	if (arr == NULL)
	{
			printf("Erro na alocação de memória.\n");
			return (1);
	}

	printf("arr[] = ");
	while (i < n)
	{
		printf("[%d]", arr[i]);
		i++;
	}
	printf("\n");
	free(arr);
	return (0);
}*/
