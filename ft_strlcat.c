/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:06:30 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/08 13:06:58 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] && dst_len + i + 1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (dst_len < size)
		return (dst_len + src_len);
	return (size + src_len);
}
/*The first two lines declare variables to hold the length of the destination string and the source string. 
The variable i is declared for iteration.

The next line calculates the length of the destination string and stores it in the dst_len variable.

The following line calculates the length of the source string and stores it in the src_len variable.

The loop copies the characters of the source string to the end of the destination string, starting from where the destination string ends.
 The loop stops when it reaches the end of the source string or when the destination string is full. 
 After the loop, a null character is added to the end of the destination string.

The if statement checks whether there was enough space in the destination string to copy the entire source string. 
If there was, the function returns the total length of the destination and source strings. 
If there wasn't, the function returns the size of the destination buffer plus the length of the source string.*/

