/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:25:09 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 16:08:13 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "memchr" in string.h.
Definition:
	The memchr() function scans  the  initial n bytes of the memory area
	pointed to by s for the first instance of c.  Both c and the  bytes  of
	the memory area pointed to by s are interpreted as unsigned char.
Return values:
	Upon success, returns a pointer to the matching byte.
	Returns NULL if the character does not occur in the given memory area.
@param s A pointer to the memory area to be scanned.
@param c The character to be scanned for.
@param n How many bytes of the memory area should be scanned.
@param ptr A pointer which will point to the first instance of c.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			i;
	const unsigned char		*ptr;

	if (n == 0)
		return (NULL);
	i = 0;
	ptr = (const unsigned char *) s;
	while (ptr[i] != (unsigned char)c && n - 1 > 0)
	{
		i++;
		n--;
	}
	if (ptr[i] != (unsigned char)c)
		return (NULL);
	return ((void *)&ptr[i]);
}
