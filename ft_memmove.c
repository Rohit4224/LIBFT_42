/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:47:35 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/24 12:20:05 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s == d)
		return (dst);
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dst);
}
/*Here's a line-by-line breakdown of what the function does:

    The function takes in a pointer to the destination buffer, a pointer to the source buffer, and the number of bytes to copy.
    Two unsigned char pointers, s and d, are created to point to the source and destination buffers respectively.
    If the source and destination buffers are the same, the function simply returns the destination buffer.
    If the source buffer is located before the destination buffer, the function copies the bytes from the end of the buffer to the beginning to avoid overwriting bytes that haven't been copied yet.
    If the destination buffer is located before the source buffer, the function copies the bytes from the beginning of the buffer to the end.
    Finally, the function returns a pointer to the destination buffer.*/
