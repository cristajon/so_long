/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:56:07 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:14:08 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	n;

	n = 0;
	if (!s)
		return ;
	i = ft_strlen(s);
	if (!*s || !f)
		return ;
	while (n < i)
	{
		f(n, s + n);
		n++;
	}
}
