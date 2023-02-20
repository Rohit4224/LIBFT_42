/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:56:28 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:23:52 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/* Explanation:

    ft_lstnew function creates a new node and returns a pointer to that node.
    The content parameter is assigned to the node's content field.
    The next field is initialized to NULL.
    Memory is allocated for the new node using malloc.
    If malloc fails to allocate memory, NULL is returned to indicate failure.*/
