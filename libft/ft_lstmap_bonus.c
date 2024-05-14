/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:52:08 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/02/22 11:52:12 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		aux = ft_lstnew(f((void *)lst->content));
		if (!aux)
		{
			del(new->content);
			return (NULL);
		}
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}
