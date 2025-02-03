/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:38:26 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 16:20:01 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "memcpy" in string.h.
Definition:
	The  memcpy()  function  copies  n bytes from memory area src to memory
	area dest.  The memory areas must not overlap.
Return values:
	Returns a pointer to dest.
@param src A pointer to the start of the original memory.
@param dest A pointer to the start of the copied memory.
@param n How many bytes to be copied.
@param srcptr Making srcptr point to src, with the purpose of typecasting. Same
applies to destptr.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destptr;
	const unsigned char	*srcptr;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	srcptr = src;
	destptr = dest;
	while (i < n)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	return (dest);
}
