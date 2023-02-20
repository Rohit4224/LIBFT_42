/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:20:29 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/19 11:58:01 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i; // declare variable to keep track of the current character index
    int result; // declare variable to store the converted integer
    int sign; // declare variable to keep track of the sign of the integer

    i = 0; // initialize the index to 0
    result = 0; // initialize the result to 0
    sign = 1; // initialize the sign to positive

    // skip over any leading whitespace characters
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }

    // check for a sign character (+ or -)
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1; // if negative sign found, set the sign to negative
        }
        i++; // move to the next character
    }

    // convert any subsequent digits to an integer
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0'; // convert the digit to a numerical value and add it to the result
        i++; // move to the next character
    }

    return (result * sign); // return the result multiplied by the sign
}
