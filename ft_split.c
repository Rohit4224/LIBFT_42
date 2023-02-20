/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhinchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:14:16 by rkhinchi          #+#    #+#             */
/*   Updated: 2022/10/26 12:08:52 by rkhinchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdlib.h>

int ft_strwordlen(char *str)
{
    int len = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\t')
            len++;
        while (str[i] != ' ' && str[i] != '\t' && str[i])
            i++;
        while (str[i] == ' ' || str[i] == '\t')
            i++;
    }
    return (len);
}
/*This function ft_strwordlen takes a pointer to a string as an argument and returns the number of words in that string.
The function loops through the string character by character until it reaches the end of the string. 
For each character, it checks whether it is a space (' ') or tab ('\t').
 If it is not, it increments the length of the word by one. 
 Then it moves the index i to the end of the current word by looping through the consecutive characters that are not space or tab.
Finally, the function moves the index i to the start of the next word by looping through the consecutive spaces or tabs. 
It repeats this process until it reaches the end of the string, 
then it returns the total length of all the words in the string.
*/

char *ft_parola(char *str)
{
    char *parola;
    int i = 0;
    while(str[i] && str[i] != ' ' && str[i] != '\t')
        i++;
    parola = (char*)malloc(sizeof(char) * i + 1);
    i = 0;
    while(str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
    {
        parola[i] = str[i];
        i++;
    }
    parola[i] = '\0'; 
    return(parola); 

}
/*This function, ft_parola, takes a string as input and returns a newly allocated string representing the first word in the input string.

It works by first iterating through the input string until it reaches a space or tab character, which signifies the end of the first word. 
It then allocates memory for a new string to store the first word and copies the characters from the input string into the new string until it reaches the end of the first word. 
Finally, it adds a null terminator to the new string and returns a pointer to the new string.
*/

char **ft_split(char *str)
{
    char **split;
    int i = 0;

    while (*str && (*str == ' ' || *str == '\t'))
    {
        str++;
    }
    split = (char **)malloc(sizeof(char *) * ft_strwordlen(str) + 1);
    while(*str)
    {
        
        while (*str == ' ' || *str == '\t')
        {
            str++;
        }
        if (*str && *str != ' ' && *str != '\t')
        {
            split[i] = ft_parola(str);
            i++;
        }
        while (*str != ' ' && *str != '\t' && *str)
        {
            str++;
        }
    }
    split[i] = NULL;
    return(split);
}
/*This function takes a string str as input and returns a double pointer split which contains all the words in the string separated by spaces or tabs.

The function first skips over any leading spaces or tabs in the string. 
It then dynamically allocates memory for the double pointer split using ft_strwordlen function which returns the number of words in the string.

It then iterates over the string and skips any spaces or tabs encountered. 
When a new word is found, it calls the ft_parola function to extract the word and store it in the split array at index i. 
It then increments i to store the next word in the next index.

The function continues to iterate over the string until it reaches the end or encounters a space or tab after a word. 
It then sets the last element of the split array to NULL.

The ft_parola function extracts a word from the string str and returns a pointer to a new string that contains the word. 
It allocates memory for this new string using malloc. It extracts the word by iterating over the string and copying each character until it reaches the end of the word. 
It then sets the last character of the new string to '\0' to terminate the string.

/*
#include<stdio.h>

int main()
{
	char	*str = "I am the best";
	char	**strs = ft_split(str);
	int		i = -1;

	while (++i < ft_strwordlen(str))
	{
		printf("str %d: ", i + 1);
		printf("|%s|\n", strs[i]);
	}
}
*/