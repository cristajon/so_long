/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:22:07 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/07/15 17:23:40 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>	
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 12
# endif

char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*ft_cpy(char *dst, const char *src);
char	*ft_strjoin(char const*s1, char const *s2);
size_t	ft_strline(char *str);
char	*ft_strchr(const char *s, int c);

#endif