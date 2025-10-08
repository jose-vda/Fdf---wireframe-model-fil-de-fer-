/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:11:01 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 19:11:04 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		if (str1[i] == '\0' || str2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

/*int main()
{
	char    str1[] = "Eu an";
	char    str2[] = "Eu amo ";
	int     size = 10;

	int     resultado = ft_strncmp(str1, str2, size);

	printf("%d", resultado);

	return (0);
}*/
