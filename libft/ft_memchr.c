/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:15:53 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:10:56 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*temp;

	i = 0;
	while (i < n)
	{
		temp = ((unsigned const char *)s);
		if (temp[i] == (unsigned const char)c)
		{
			return (((char *)&s[i]));
		}
		i++;
	}
	return (NULL);
}
