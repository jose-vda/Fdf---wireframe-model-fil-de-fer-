/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:25:33 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 19:25:33 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*str;
	unsigned int	i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*int main()
{
	char    s[] = "Eu amo estudar";
	int     n = 10;

	printf("Antes:\n%s\n\n", s);

	ft_bzero(s,n);

	printf("Depois:\n%s\n\n", s);
	return (0);
}*/