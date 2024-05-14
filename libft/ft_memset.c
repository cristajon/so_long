/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:08:00 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/22 11:56:38 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = (char)c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	void *b = "haaaaaaaa";
// 	int c = 'k';
// 	size_t len = 5;
// 	char *a = ft_memset(b,c,len);
// 	printf("lo que me da        -> %s\n", a);
// 	printf("lo que tiene que dar-> %s\n", memset(b,c,len));
// }