/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:09:53 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/08 13:10:02 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
   /* char *ft_strchr(const char *s, int c) is the function signature, 
   taking a const char * as the string to search, and an int as the character to look for, which is casted to char.
    while (*s) loops through the string until the end of the string is reached, i.e. the null terminator ('\0').
    if (*s == (char)c) checks if the current character is equal to the search character, casted to char. 
    If it is, a pointer to that character in the string is returned.
    s++ increments the pointer to the next character in the string.
    if (*s == (char)c) checks if the null terminator is the search character. 
    If it is, a pointer to the null terminator in the string is returned.
    return (NULL) is returned if the search character is not found in the string.*/