/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:59:52 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/18 15:25:00 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*sub_str;
	size_t			s_len;

	if (s == NULL)
		return (ft_strdup(""));
	s_len = ft_strlen((const char *)s);
	i = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (sub_str == NULL)
		return (NULL);
	while (i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

/*int	main(void)
{
	char	*s;
	int		start;
	int		len;

	s = "Eu amo estudar";
	start = 3;
	len = 2;
	printf("%s", ft_substr(s, 1, 10));
	// free(substring);
	return (0);
}*/
