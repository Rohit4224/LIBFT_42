/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:27:24 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/19 11:56:05 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;    // declare a size_t variable to keep track of the index
	char	*str; // declare a char pointer to cast the given memory address

	i = 0; // initialize the index to zero
	str = s; // cast the given memory address to a char pointer

	while (i < n) // loop through the memory region
	{
		str[i] = c; // set the value of the memory location to the given character
		i++; // increment the index
	}

	return (s); // return the modified memory address
}


/*int             main(int argc, const char *argv[])
{
        void    *mem;
        int             arg;

        alarm(5);
        if (!(mem = malloc(sizeof(*mem) * 15)) || argc == 1)
                return (0);
        memset(mem, 'j', 15);
	if ((arg = atoi(argv[1])) == 1)
	{
         	if (mem != ft_memset(mem, 'c', 5))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
        else if (arg == 2)
	{
         	if (mem != ft_memset(mem, 'c', 14))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
        else if (arg == 3)
	{
         	if (mem != ft_memset(mem, '\n', 6))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
        else if (arg == 4)
	{
         	if (mem != ft_memset(mem, '\0', 1))
			write(1, "mem's adress was not returned\n", 30);
		write(1, mem, 15);
	}
        return (0);
}*/
