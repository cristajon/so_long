/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:33:39 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:15:18 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	if ((!dst || !src) && dstsize == 0)
		return (0);
	a = ft_strlen(src);
	i = ft_strlen(dst);
	if (i > dstsize)
		return (a + dstsize);
	else
	{
		dst = dst + i;
		ft_strlcpy(dst, src, dstsize - i);
	}
	return (a + i);
}
