/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 20:56:01 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:17:59 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *) s1;
	aux2 = (unsigned char *) s2;
	i = 0;
	while ((aux1[i] != '\0' || aux2[i] != '\0') && i < n)
	{
		if (aux1[i] == aux2[i])
			i++;
		else
			return (aux1[i] - aux2[i]);
	}
	return (0);
}
