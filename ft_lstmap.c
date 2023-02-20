/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:02:24 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/24 12:25:39 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);

	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content)); // create new node with content processed by function f
		if (!new_node)
		{
			ft_lstclear(&new_list, del); // free all memory in the new list
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node); // add new node to the end of new list
		lst = lst->next;
	}
	return (new_list);
}
/*the function checks for lst and f parameters to avoid dereferencing null pointers. 
The new_list variable is initialized to NULL and a new node is created with f applied to the content of the current node in each iteration. 
If the node creation fails, the new list is cleared and the function returns NULL. 
Finally, the new node is added to the end of the new list and the loop continues to the next node in the original list. 
The new list is returned after all nodes have been processed.*/
