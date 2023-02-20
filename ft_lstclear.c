/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:15:12 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/22 20:15:15 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	
	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next; // Save the address of the next node
		del((*lst)->content); // Delete the content of the current node
		free(*lst); // Free the current node
		*lst = tmp; // Move to the next node
	}
}
/*
Explanation:

    The function takes in a double pointer to the head of the linked list and a function pointer del that will be used to delete the content of the linked list nodes.
    The function starts by checking if either the linked list or the delete function is NULL, in which case it immediately returns.
    The while loop continues until there are no more nodes in the linked list.
    tmp variable stores the address of the next node so that it's not lost during deletion of the current node.
    The function pointer del is used to delete the content of the current node.
    The current node is freed with free().
    Finally, the head of the linked list is updated with the address of the next node, so that it can be freed in the next iteration.*/