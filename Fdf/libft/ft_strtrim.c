/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:06:58 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 18:59:38 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/
#include "libft.h"

int	calc_start(const char *s1, const char *set)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

int	calc_end(const char *s1, const char *set)
{
	unsigned int	len;

	len = ft_strlen(s1);
	if (len == 0)
		return (0);
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	result_index;
	unsigned int	len;
	char			*result;

	if (!s1 || !set)
		return (NULL);
	start = calc_start(s1, set);
	end = calc_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	len = end - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result_index = 0;
	while (result_index < len)
	{
		result[result_index] = s1[start + result_index];
		result_index++;
	}
	result[result_index] = '\0';
	return (result);
}

/*int	main(void)
{
	const char s1[] = "  \t \t \n   \n\n\n\t";
	const char set[] = " \n\t";

	printf("%s\n\n", ft_strtrim(s1, " \n\t"));
	printf("Start: %d\n\nEnd: %d\n\n", calc_start(s1, set), calc_end(s1, set));

	return (0);
}*/
