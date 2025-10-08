/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:08:01 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 19:08:08 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	while (size >= 0)
	{
		if (str[size] == (char)c)
			return ((char *)&str[size]);
		size--;
	}
	return (NULL);
}

/*int main()
{
	char str[] = "Eu amo estudar";
	char c = 'u';

	char *resultado = ft_strrchr(str, 'a');

	if (resultado != (void *)0)
		printf("Caractere encontrado na posicao: %ld\n", (resultado - str + 1));
	else
		printf("Caractere não encontrado.\n");

	return (0);
}*/
