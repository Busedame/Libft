/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:09:25 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 19:56:57 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "strncmp" in string.h.
Definition:
	The strncmp() function lexicographically compares the null-
	terminated strings s1 and s2, but not more than n characters.
	Because strncmp() is designed for comparing strings rather than 
	binary data, characters that appear after a `\0' character are not compared.
Return values:
	If n bytes of s1 is greater than n bytes of s2, returns a positive integer.
	If n bytes of s1 is smaller than n bytes of s2, returns a negative integer.
	If n bytes of s1 and n bytes of s2 are identical, returns 0.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0'
		&& s2[i] != '\0')
		i++;
	if (i < n)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}
