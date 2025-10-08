/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:11:40 by jose-vda          #+#    #+#             */
/*   Updated: 2025/04/11 18:47:42 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	unsigned int	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	*s;
	int		fd;

	s = "Eu amo estudar";
	fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
}*/
