/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 20:30:35 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/18 20:30:46 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t b;
    void *p;

    b = count * size;// calculate the total number of bytes to allocate
    p = malloc(b);// allocate memory of size b and assign its address to p

    if (p == NULL)// check if malloc failed
    {
        return NULL;// return NULL if malloc failed
    }

    ft_memset(p, 0, b);// set all bytes of the allocated memory to 0

    return p;// return the pointer to the allocated memory
}

