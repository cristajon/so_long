/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:08:23 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/07/15 20:49:23 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	aux(char *line, char *lineaux, int i)
{
	int	j;

	j = 0;
	while (line[i] != '\0')
	{
		lineaux[j] = line[i];
		j++;
		i++;
	}
	return (j);
}

static char	*ft_rest(char *line)
{
	int		count;
	int		i;
	char	*lineaux;

	i = 0;
	count = 0;
	if (!line)
		return (NULL);
	count = ft_strline(line);
	if (line[count] == '\0')
	{
		free(line);
		return (NULL);
	}
	lineaux = malloc(sizeof(char) * (ft_strlen(line) - ft_strline(line)) + 1);
	if (!lineaux)
		return (NULL);
	while (line[i] != '\n' && line[i])
		i++;
	if (line[i] == '\n')
		i++;
	lineaux[aux(line, lineaux, i)] = '\0';
	free(line);
	return (lineaux);
}

static char	*ft_getline(char *line)
{
	int		c;
	char	*new;

	new = malloc(sizeof(char) * ft_strline(line) + 1);
	if (!new)
		return (NULL);
	c = 0;
	if (!line[c])
		return (NULL);
	new = ft_cpy(new, line);
	return (new);
}

static char	*ft_read(int fd, char *line, char *all)
{
	int	r;

	line = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!line)
		return (NULL);
	r = read(fd, line, BUFFER_SIZE);
	line[r] = '\0';
	if (r < 0)
		return (NULL);
	if (r == 0)
	{
		free(line);
		return (all);
	}
	if (all)
		ft_strjoin(all, line);
	else
		all = ft_strdup(line);
	free(line);
	return (all);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*all = NULL;

	line = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 1000)
		return (NULL);
	while (!ft_strchr((const char *)all, '\n'))
	{
		all = ft_read(fd, line, all);
		fflush(0);
	}
	line = ft_getline(all);
	all = ft_rest(all);
	return (line);
}
