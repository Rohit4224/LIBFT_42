/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:39:59 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/19 16:40:10 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*    The void return type and the function name ft_striteri remain unchanged.
    The function takes two parameters, a string s and a function pointer f.
    The function iterates over the string s until it reaches the null terminator, using a while loop.
    The variable i is used to keep track of the current index in the string.
    The f function is called with the current index i and a pointer to the current character in s.
    The i index is incremented after each iteration of the loop.
*/