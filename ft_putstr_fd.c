/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:37:02 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:13:29 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd); // print the current character to fd
		s++; // increment the pointer to point to the next character
	}
}
/*the loop is iterating through the string using a pointer s instead of an index i. 
We check if the current character pointed to by s is the null terminator, 
and if not, we print it to the file descriptor using ft_putchar_fd, 
and then move the pointer to point to the next character.*/
