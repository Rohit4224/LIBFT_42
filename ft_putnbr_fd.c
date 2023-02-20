/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:42:19 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/18 21:42:55 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	// If n is the smallest negative integer value, print the corresponding string
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	// If n is negative, print a '-' character and call the function recursively with the absolute value of n
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	// If n has two or more digits, call the function recursively with the quotient and print the remainder
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	// If n has only one digit, print it as a character
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}

