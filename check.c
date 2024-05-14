/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 19:31:53 by ceaizkor          #+#    #+#             */
/*   Updated: 2024/05/14 19:31:54 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"

int count_lines(int fd)
{
    int i;
    int c;
    int lines;

    lines = (char *)malloc(sizeof(char)*(1 + 1));
    c = 0;
    i = 1;
    while(i == 1)
    {
        i = read(fd, lines, 1);
        lines[1] = 0;
        if(i == -1)
            return (0);
        if(!lines)
            break; //esto se puede usar??
        if(ft_strchr(lines, '\n'));
            c++;    
    }
    if(lines)
        free(lines);
    return(c++);
}