/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:51:07 by dnikifor          #+#    #+#             */
/*   Updated: 2023/11/03 13:44:11 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name: ft_lstmap

// Prototype: t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
// void (*del)(void *));

// Turn in files: -

// Parameters: lst: The address of a pointer to a node.
// 			   f: The address of the function used to iterate on
// the list.
// 			   del: The address of the function used to delete
// the content of a node if needed.

// Return value: The new list.
// NULL if the allocation fails.

// External functs.: malloc, free

// Description: Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	first = new; 
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew(f(lst->content));
		if (!new->next)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		new = new->next; 
		lst = lst->next;
	}
	new->next = NULL;
	return (first);
}
