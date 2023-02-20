/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:33:06 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/19 16:37:41 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i; // declare an unsigned integer variable i to be used in the loop
	char			*str; // declare a pointer variable to a char to hold the resulting string

	i = 0; // initialize i to 0
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1); // allocate memory for str
	if (str == NULL) // check if memory allocation failed
		return (NULL); // return NULL if allocation fails
	while (s[i] != '\0') // iterate through s until the end of the string is reached
	{
		str[i] = f(i, s[i]); // apply the function f to each character in s and store the result in str
		i++; // increment i
	}
	str[i] = '\0'; // add a null terminator at the end of the resulting string
	return (str); // return the resulting string
}


/*
#include <stdio.h>

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
*/
