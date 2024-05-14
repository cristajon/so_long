/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:00:26 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:20:13 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sol;
	size_t		aux;

	if (!s)
		return (NULL);
	i = 0;
	aux = ft_strlen(s);
	if (!*s || start > aux)
		return (ft_strdup(""));
	if (len > aux)
		len = aux;
	sol = malloc(sizeof(char) * (len + 1));
	if (!sol)
		return (NULL);
	while (len != 0 && start <= aux)
	{
		((char *)sol)[i] = ((char *)s)[start];
		start++;
		i++;
		len--;
	}
	((char *)sol)[i] = '\0';
	return (sol);
}
