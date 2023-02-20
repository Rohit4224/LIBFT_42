/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:12:38 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/08 13:12:42 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;

	// cast s to a char pointer to allow for arithmetic on byte level
	str = (char *)s;
	
	// loop over n bytes in the memory region pointed to by s
	while (n--)
	{
		// check if the byte at the current position is equal to c
		if (*str == (char)c)
			return (str);
		// if not, move to the next byte
		str++;
	}
	
	// if c was not found in the memory region, return NULL
	return (NULL);
}
/*The function starts by casting the input pointer s to a char*, 
so that we can iterate over the memory region byte by byte.

Then, the while loop is used to loop over n bytes in the memory region pointed to by s. 
For each byte, we check whether it is equal to the character c. 
If a match is found, a pointer to that byte is returned.

If no match is found, the loop continues to the next byte until the entire memory region has been searched. 
If c is not found in the memory region, the function returns NULL.*/