/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:25:04 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/20 12:48:15 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len = (n == 0); // initialize len to 1 if n is 0
	char	*str;

	// determine the length of the string
	while (n != 0)
	{
		len++;
		n /= 10;
	}

	// allocate memory for the string
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);

	str[len] = '\0'; // null-terminate the string

	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n = -n; // make n positive
	}

	// fill in the string with digits
	while (n != 0)
	{
		len--;
		str[len] = n % 10 + '0'; // add the least significant digit to the string
		n /= 10; // shift to the next digit
	}

	return (str);
}


