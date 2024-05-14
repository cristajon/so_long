/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:18:41 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:19:12 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	ft_beg(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s1) && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	ft_fin(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	return (i);
}

void	ft_write(char const *s1, size_t start, size_t end, char *s2)
{
	size_t	a;
	size_t	t;

	a = 0;
	t = 0;
	while (a < start)
		a++;
	while (a <= end)
	{
		s2[t] = s1[a];
		t++;
		a++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s2;
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	i = ft_beg(s1, set);
	n = ft_fin(s1, set);
	if (i > n)
		return (ft_strdup(""));
	s2 = malloc(sizeof(char) * ((n - i) + 2));
	if (!s2)
		return (NULL);
	ft_write(s1, i, n, s2);
	s2[(n - i) + 1] = '\0';
	return (s2);
}
