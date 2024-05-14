/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:15:19 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:17:21 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*sol;

	i = 0;
	if (!s)
		return (NULL);
	sol = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sol)
		return (NULL);
	while (s[i])
	{
		sol[i] = f(i, s[i]);
		i++;
	}
	sol[i++] = '\0';
	return (sol);
}
