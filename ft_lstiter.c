/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:01:34 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:10:15 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
/*Explanation:

    ft_lstiter takes a linked list lst and applies the function f to each element in the list.
    The function first checks if both lst and f are not NULL.
    The loop iterates through the list and applies the function f to each element's content.
    After f has been applied to all elements, the function terminates.*/
