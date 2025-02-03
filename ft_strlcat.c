/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:23:48 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 18:32:02 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "strlcat" in string.h.
Definition:
	The strlcat() function concatenates two strings.
	It takes the full size of the buffer (not just
	the length) and guarantees to NUL-terminate the result (as long as size is
	larger than 0 or as long as there is at least one byte free in dst). 
	Note that a byte for the NULL should be included
	in size. Also, both src and dst must be NULL-terminated.
	The strlcat() function appends the NULL-terminated string src to the end
	of dst. It will append at most size - strlen(dst) - 1 bytes, NULL-termi‐
	nating the result.
Return values:
	Returns the total length of the string it tried to create. That means the 
	initial length of dst plus the length of src. While this may seem somewhat 
	confusing, it was done to make truncation detection simple.
	
	Note, however, that if strlcat() traverses size characters without finding 
	a NULL, the length of the string is considered to be size and the des‐
	tination string will not be NULL-terminated (since there was no space for
	the NULL). This keeps strlcat() from running off the end of a string.
	In practice this should not happen (as it means that either size is 
	incorrect or that dst is not a proper “C” string).  The check exists to 
	prevent potential security problems in incorrect code.
@param size The starting position in dest, where src should be appended.
*/
int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	totallen;

	j = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	totallen = i + j;
	if (i + 1 < size)
	{
		j = 0;
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0' && i + 1 < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (totallen);
}
