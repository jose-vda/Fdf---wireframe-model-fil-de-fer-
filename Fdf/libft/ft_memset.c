/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:49:59 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 18:55:47 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;

	p = ptr;
	i = 0;
	while (i < num)
	{
		p[i] = value;
		i++;
	}
	return (ptr);
}

/*int main()
{
	char str[50] = "Eu amo estudar.";

	ft_memset(str, 'A', 4);

	printf("Resultado: %s\n", str);

	return (0);
}*/
