/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:36:05 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:13:34 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	cont;
	char	*location;

	cont = ft_strlen(s1);
	location = malloc(cont + 1);
	if (!location)
		return (NULL);
	ft_memcpy(location, s1, cont);
	location[cont] = '\0';
	return (location);
}
