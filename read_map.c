/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:32:50 by ceaizkor          #+#    #+#             */
/*   Updated: 2024/05/14 19:41:13 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_size(size_t size, char *str)
{
	if (size != ft_strlen(str))
	{
		if (str)
			free(str);
		write(2, "Error: no square map\n", 21);
		exit(0);
	}
}

void	error_norm(char a)
{
	if (a == 'e')
		write(2, "Error: empty\n", 13);
	if (a == 'b')
		write(2, "Error: too big!\n", 16);
	exit(0);
}

vid ft_read_map.2(t_all *all, char *str, int fd)
{
	size_t		size;
	static int	i;
	static int	j;
	static int	a;

	size = ft_strlen(str);
	if (!size)
		exit(0);
	while (str)
	{
		check_size(size, str);
		size = ft_strlen(str);
		all->map.map[i] = (char *)malloc(sizeof(char) * (all->map.y));
		while (str[a] && str[a] != '\n')
			all->map.map[i][j++] = str[a++];
		all->map.map[i][j] = '\0';
		free(str);
		str = get_next_line(fd);
		a = 0;
		j = 0;
		i++;
	}
	if (str)
		free(str);
}

void read_map(t_all *all, char *argv[])
{
    int     fd;
    char    *str;

    fd = open(argv[1], O_RONLY);
    if(fd == -1)
        display("unable to open");
    all -> map.x = count_lines(fd);
    close(fd);
	fd = open(argv[1], O_RDONLY);
	str = get_next_line(fd);
	if (!str)
		error_norm('e');
	all->map.map = (char **)malloc(sizeof(char *) * (all->map.x + 1));
	all->map.map[all->map.x] = NULL;
	all->map.y = ft_strlen(str);
	ft_read_map.2(all, str, fd);
	close(fd);
	if (all->map.x * 64 > 5120 || all->map.y * 64 > 2880)
		error_norm('b');
	ft_check_map(all);
}
