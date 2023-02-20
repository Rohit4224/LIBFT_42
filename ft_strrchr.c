/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:11:25 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:10:49 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			found = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (found);
}
/*We start by declaring a pointer variable found and initializing it to NULL. This variable will be used to store the latest occurrence of the character c.
We then iterate over the string s using a while loop. For each character, we check if it matches c. If it does, we update the found pointer to point to the current position in s.
After the loop, we check if the last character in s is equal to c. If it is, we return a pointer to it.
If the character c is not found in s, we return the pointer stored in found, which will be NULL if no match was found.*/

/*#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int main(void) {
    char str[] = "Hello, world!";
    int ch = 'o';
    char *p1, *p2;

    // Find the last occurrence of 'o' in the string using ft_strrchr
    p1 = ft_strrchr(str, ch);

    // Find the last occurrence of 'o' in the string using strchr
    p2 = strrchr(str, ch);

    // Print the results
    printf("ft_strrchr: %s\n", p1);
    printf("strrchr: %s\n", p2);

    return 0;
}
*/
