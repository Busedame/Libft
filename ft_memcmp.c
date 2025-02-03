/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:11:12 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 16:16:09 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "memcmp" in string.h.
Definition:
	The  memcmp()  function compares the first n bytes (each interpreted as
	unsigned char) of the memory areas s1 and s2.
Return values:
	If n bytes of s1 is greater than n bytes of s2, returns a positive integer.
	If n bytes of s1 is smaller than n bytes of s2, returns a negative integer.
	If n bytes of s1 and n bytes of s2 are identical, returns 0.
@param s1 String 1.
@param s2 String 2.
@param n How many bytes to be read.
@param j Used to store n, to keep track of how many bytes remain to read.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		i;
	unsigned char		j;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	j = (unsigned char) n;
	p1 = (const unsigned char *) s1;
	p2 = (const unsigned char *) s2;
	while (p1[i] == p2[i] && j > 1)
	{
		i++;
		j--;
	}
	if (j >= 1)
		return (p1[i] - p2[i]);
	return (0);
}
