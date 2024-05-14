/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:14:47 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:15:04 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const*s1, char const *s2)
{
	int		lens1;
	int		lens2;
	int		i;
	char	*s3;

	if (!s2 || !s1)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (lens1 + lens2 + 1));
	i = 0;
	if (!s3)
		return (NULL);
	while (i <= lens1)
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= lens2)
	{
		s3[lens1 + i] = s2[i];
		i++;
	}
	return (s3);
}
