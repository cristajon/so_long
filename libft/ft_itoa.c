/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:33:41 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 20:09:03 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	a;

	a = 0;
	if (n <= 0)
	{
		n = n * -1;
		a++;
	}
	while (n != 0)
	{
		n = n / 10;
		a++;
	}
	return (a);
}

char	*ft_aux1(char	*s)
{
	s[0] = '0';
	return (s);
}

char	*ft_aux2(char	*s, long int temp, int a)
{
	while (temp > 0)
	{
		s[a - 1] = (temp % 10) + 48;
		temp = temp / 10;
		a--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char		*s;
	long int	temp;
	int			a;

	temp = n;
	a = ft_intlen(n);
	s = malloc((a + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[a] = '\0';
	if (!s)
		return (NULL);
	if (temp < 0)
	{
		s[0] = '-';
		temp = temp * -1;
	}
	else if (temp == 0)
		return (ft_aux1(s));
	return (ft_aux2(s, temp, a));
}
