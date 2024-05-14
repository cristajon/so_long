/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:06:40 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/22 11:56:08 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dest > source)
	{
		while (n--)
			dest[n] = source[n];
	}
	else if (dest < source)
		ft_memcpy(dst, src, n);
	return (dst);
}
// int main()
// {
// 	void *dst = "haaaaaaaa";
// 	void *src = "holi caracoli";
// 	size_t len = 10;
// 	char *a = ft_memmove(dst,src,len);
// 	printf("lo que me da        -> %s\n", a);
// 	printf("lo que tiene que dar-> %s\n", memmove(dst,src,len));
// }