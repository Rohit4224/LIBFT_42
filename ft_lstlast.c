/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:58:37 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:11:27 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*    The function takes a pointer to the head of a linked list.
    The first line of the function checks if the list is empty. If it is, the function returns NULL.
    The while loop iterates through the list until it reaches the last node.
    Finally, the function returns a pointer to the last node in the list.*/
