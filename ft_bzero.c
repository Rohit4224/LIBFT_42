/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:08:12 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/05 17:09:22 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *p = (char *) s; // cast the void pointer to a char pointer
    size_t i = 0; // initialize the index to 0

    while (i < n) // loop through each byte of memory up to n
    {
        p[i] = 0; // set the value of the current byte to 0
        i++; // move to the next byte
    }
}

