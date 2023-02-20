/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:58:03 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/22 19:58:11 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*Explanation:

    ft_lstsize takes a pointer to the first element of a linked list.
    We initialize the variable size to 0, which will be incremented as we traverse the linked list.
    We use a while loop to traverse the list as long as it is not empty (lst != NULL).
    Inside the loop, we increment the size of the list and move to the next element (lst = lst->next).
    Once the end of the list is reached, we return the final size.*/
