/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:10:51 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/23 11:46:13 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	if (!*needle || len == 0)
		return ((char *)haystack);
	while (*haystack && len-- >= ft_strlen(needle))
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

// int main()
// {
// 	char src[14] = "holi caracoli";
// 	char dest[4] = "holi";
// 	int nb = 2;
// 	printf("lo que me da        -> %s\n", ft_strnstr(src,dest,nb));
// 	printf("lo que tiene que dar-> %s\n", strnstr(src,dest,nb));
// 	return (0);
// }
