/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:38:37 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/15 13:21:29 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	// Cast dest and src pointers to char pointers
	char *dest_ptr;
	const char *src_ptr;

	*dest_ptr = (char *)dest;
	*src_ptr = (const char *)src;

	// Copy n bytes from src to dest
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}

	// Return the dest pointer
	return (dest);
}
/*This function copies n bytes from the memory area pointed to by src to the memory area pointed to by dest. 
The function returns the dest pointer.*/