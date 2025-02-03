/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:41:16 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 18:10:42 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Which function:
	Equivalent to the function "strdup" in string.h
Definition:
	The  strdup() function returns a pointer to a new string which is a 
	duplicate of the string s. Memory for the new string  is  obtained  with
	malloc, and can be freed with free.
Return values:
	On success, the strdup() function returns a dynamically allocated pointer 
	to the duplicated string. It returns NULL if insufficient memory was 
	available.
@param s The source string
@param dup The dest string
@param len Measures the length of string s, for memory allocation.
*/
char	*ft_strdup(const char *s)
{
	char		*dup;
	int			i;
	size_t		len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
