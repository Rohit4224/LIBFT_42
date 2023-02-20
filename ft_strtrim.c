/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:15:25 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/19 15:15:35 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	// If either string is null, return null
	if (s1 == NULL || set == NULL)
		return (NULL);

	// Set i to first non-set character in s1
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;

	// Set j to last non-set character in s1
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;

	// Allocate memory for trimmed string and copy over
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str)
		ft_strlcpy(str, s1 + i, j - i + 1);

	return (str);
}
/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
    char str[] = "  \t   \nHello, world! \n \t ";
    char set[] = " \t\n";
    char *trimmed_str = ft_strtrim(str, set);

    if (trimmed_str)
    {
        printf("Original string: \"%s\"\n", str);
        printf("Trimmed string: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
