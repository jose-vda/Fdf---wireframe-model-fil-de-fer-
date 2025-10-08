/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:59:41 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 18:56:34 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	f(unsigned int i, char *s)
{
	printf("Indice %d: %c\n", i, *s);
}

int	main(void)
{
	char	s[] = "Eu amo estudar";

	ft_striteri(s,f);

	return (0);
}*/
