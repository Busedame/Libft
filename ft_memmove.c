/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:05:42 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 16:50:41 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "memmove" in string.h.
Definition:
	The  memmove()  function  copies n bytes from memory area src to memory
	area dest.  The memory areas may overlap: copying happens either starting 
	from the start or end of src, depending on how dest and src are placed
	in the memory.
Return values:
	Returns a pointer to dest.
@param src A pointer to the start of the original memory.
@param dest A pointer to the start of the copied memory.
@param n How many bytes to be copied.
@param j Stores n, in order to be able to copy starting from end instead of 
start.
@param srcptr Making srcptr point to src, with the purpose of typecasting. Same
applies to destptr.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	size_t				j;
	unsigned char		*destptr;
	const unsigned char	*srcptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	j = n;
	destptr = dest;
	srcptr = src;
	if (dest > src)
	{
		while (j-- > 0)
			destptr[j] = srcptr[j];
	}
	else
	{
		while (i < n)
		{
			destptr[i] = srcptr[i];
			i++;
		}
	}
	return (dest);
}
