/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:39:44 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/22 11:55:33 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*h1;
	const unsigned char	*h2;

	i = 0;
	h1 = ((const unsigned char *)s1);
	h2 = ((const unsigned char *)s2);
	while (n--)
	{
		if (*h1 == *h2)
		{
			h1++;
			h2++;
		}
		else
			return (*h1 - *h2);
	}	
	return (0);
}

// int main()
// {
// 	char s1[] = {0, 0, 127, 0};
// 	char s2[] = {0, 0, 42, 0};
// 	size_t n = 4;
// 	int a = ft_memcmp(s1,s2,n);
// 	printf("lo que me da        -> %d\n", a);
// 	printf("lo que tiene que dar-> %d\n", memcmp(s1,s2,n));
// }
