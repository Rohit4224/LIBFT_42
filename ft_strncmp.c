/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:12:03 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/24 12:35:07 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*size_t i is declared and initialized to 0.
while (i < n && s1[i] && s2[i] && s1[i] == s2[i]) loops through the characters of s1 and s2 until either i reaches n, or one of the strings ends, or a character in s1 is different from the corresponding character in s2. Note that we can use the && operator to avoid having multiple conditions separated by &&.
Inside the loop, i is incremented.
If i equals n, it means that the strings are identical up to the first n characters, so we return 0.
Otherwise, we return the difference between the current character of s1 and s2, cast to unsigned char to ensure that the result is always positive or zero.*/
