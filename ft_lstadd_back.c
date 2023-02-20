/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:59:20 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:22:21 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;

	if (!*alst) // if the list is empty
	{
		*alst = new;
		return ;
	}

	t_list	*last = *alst;

	// iterate to the last node
	while (last->next)
		last = last->next;

	last->next = new; // add the new node to the end of the list
}

