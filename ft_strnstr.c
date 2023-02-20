/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:13:24 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/08 13:13:33 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] && haystack[i + j] == needle[j] && i + j < n)
				j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*The function takes three arguments: haystack, which is the string to search in, needle, which is the substring to search for, and n, which is the maximum number of characters to search in haystack.
The i and j variables are used to keep track of the current position in haystack and needle, respectively.
The if (!*needle) statement checks if needle is an empty string, in which case the function immediately returns a pointer to the beginning of haystack.
The while (haystack[i] && i < n) loop iterates through each character of haystack until the end of the string or the maximum search length is reached.
The if (haystack[i] == needle[0]) statement checks if the current character in haystack matches the first character of needle.
If the current character in haystack matches the first character of needle, the j variable is initialized to 1, and the while (needle[j] && haystack[i + j] == needle[j] && i + j < n) loop checks if the subsequent characters in haystack match the characters in needle. The loop continues as long as there are more characters in needle to check, the characters in haystack match the characters in needle, and the maximum search length is not exceeded.
If the entire needle string is found in haystack, the function returns a pointer to the beginning of the match.
If the needle string is not found in haystack, the i variable is incremented, and the loop continues to search for a match.
If the end of the haystack string is reached without finding a match, the function returns NULL.*/
