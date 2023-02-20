/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:14:16 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/08 13:14:45 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	// Cast input pointers to unsigned char pointers
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		// Compare the characters at the current index of each string
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);

		i++;
	}

	// If all characters are equal, return 0
	return (0);
}
/*The function takes in two void pointers to the input strings and a size_t variable n indicating the number of bytes to compare. 
The function then casts the pointers to unsigned char pointers to ensure each character is read as a single byte. 
It then loops through the two strings and compares each character one by one. 
If a character is not equal between the two strings, 
the function returns the difference between the two characters. 
If all characters are equal, the function returns 0.*/
