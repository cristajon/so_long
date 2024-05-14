/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:20:22 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/25 19:37:58 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_do(const char *str, int i, int p, int num)
{
	int	l;

	l = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			p++;
		i++;
		l++;
	}
	if (p > 1 || l > 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	if ((p % 2) != 0)
		num = num * (-1);
	return (num);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	p;
	int	num;

	p = 0;
	i = 0;
	num = 0;
	num = ft_do(str, i, p, num);
	return (num);
}
