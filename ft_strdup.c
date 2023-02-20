/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:28:19 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/18 20:28:25 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (s[len])
		len++;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*    The function takes a constant pointer to a character s as argument and returns a pointer to a newly allocated string which is a duplicate of the string pointed to by s.
    The variable str is a pointer to a char, which will be used to store the duplicated string.
    The variable len is initialized to zero and will be used to store the length of the original string.
    The while loop is used to count the number of characters in the original string s by incrementing the len variable until it reaches the null terminator character '\0'.
    Memory is allocated for the new string using malloc with the size of the len plus 1 (for the null terminator).
    If the allocation fails, the function returns NULL.
    The i variable is initialized to zero and used as the index to copy each character from the original string s to the new string str.
    The while loop is used to copy each character from the original string s to the new string str until it reaches the null terminator character '\0'.
    The last character in the new string str is set to the null terminator character '\0' to terminate the string.
    The function returns the newly duplicated string str.*/