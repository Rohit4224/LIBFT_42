/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:00:01 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:14:03 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	// If lst and del are not NULL
	if (lst && del)
	{
		// Call the del function on the content of the node
		del(lst->content);
		// Free the node memory
		free(lst);
	}
}
