/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:34:16 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 16:54:58 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "memset" in string.h.
Definition:
	The  memset()  function  fills  the  first  n  bytes of the memory area
	pointed to by s with the constant byte c.
Return values:
	Returns a pointer to the memory area s.
@param s A pointer to the memory area.
@param c The byte value to fill the memory area.
@param n How many bytes to be filled with c.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*byteptr;
	unsigned char	bytevalue;

	i = 0;
	byteptr = s;
	bytevalue = c;
	while (i < n) 
	{
		byteptr[i] = bytevalue;
		i++;
	}
	return (s);
}
