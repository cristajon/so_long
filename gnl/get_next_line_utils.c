/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:08:08 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/07/15 17:28:23 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

size_t	ft_strline(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*str && *str != '\n')
	{
		count++;
		str++;
	}
	if (*str == '\n')
		count++;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	else
		return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_cpy(char *dst, char const *src)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (src[i] != '\n')
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i] == '\n')
		dst[i++] = '\n';
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*p;

	if (s1 == NULL)
		return (NULL);
	p = malloc(ft_strlen(s1) + 1);
	if (p == NULL)
		return (NULL);
	dst = p;
	while (*s1)
		*dst++ = *s1++;
	*dst = 0;
	return (p);
}
