/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:44:10 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:11:33 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;
	int	n;

	n = 0;
	if (!s)
		return ;
	i = ft_strlen(s);
	while (n < i)
	{
		write(fd, &s[n], 1);
		n++;
	}
	write(fd, "\n", 1);
}
