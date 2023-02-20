/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:01:00 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/08 13:05:53 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	// If size is 0, return the length of src.
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	// Copy src into dest until size is reached or src ends.
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	// Terminate dest with null byte.
	if (i < size)
		dest[i] = '\0';
	// Return the length of src.
	while (src[i] != '\0')
		i++;
	return (i);
}
