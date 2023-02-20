/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:05:20 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/19 15:06:04 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	// allocate memory to hold the concatenated string, including the null terminator
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);

	// copy the characters from the first string to the result string
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	// copy the characters from the second string to the result string
	j = 0;
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}

	// add a null terminator to the end of the result string
	result[i + j] = '\0';

	// return a pointer to the result string
	return (result);
}
