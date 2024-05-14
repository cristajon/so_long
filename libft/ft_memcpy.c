/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:44:44 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/22 11:55:55 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
// int main()
// {
// 	void *src = "hali caracali";
// 	void *dst = "";
// 	size_t n = 10;
// 	ft_memcpy(dst, src,n);
// 	printf("lo que me da        -> %s\n", dst);
// 	memcpy(dst,src,n);
// 	printf("lo que tiene que dar-> %s\n", dst);
// }
