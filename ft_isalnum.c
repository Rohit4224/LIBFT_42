/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:53:10 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/24 12:37:46 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

#include "libft.h"

int ft_isalnum(int c)
{
    // check if c is a letter or a digit
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
    {
        return 1; // c is a letter or a digit
    }
    else
    {
        return 0; // c is not a letter or a digit
    }
}

/*
int	main()
{
	printf("%d", ft_isalnum('R'));
}*/
