/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:15:58 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:12:11 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*we first check if the input string s is NULL and return NULL if it is. We then compute the length of s and check if the starting index start is greater than or equal to the length of s. If it is, we return an empty string.

We then compute the actual length of the substring by taking the minimum of len and the remaining characters in s after the starting index start.

We allocate memory for the substring, copy the appropriate characters from s into it using ft_strlcpy, and return the substring.

Like before, the function returns a newly-allocated substring of s that starts at index start and has a maximum length of len. If s is NULL, the function returns NULL. If start is beyond the end of s, the function returns an empty string.*/

/*#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char *s = "Hello, world!";
	char *sub1 = ft_substr(s, 7, 5);
	char *sub2 = ft_substr(s, 0, 5);
	char *sub3 = ft_substr(s, 20, 10);

	printf("s: %s\n", s);
	printf("sub1: %s\n", sub1);
	printf("sub2: %s\n", sub2);
	printf("sub3: %s\n", sub3);

	free(sub1);
	free(sub2);
	free(sub3);

	return 0;
}
*/
