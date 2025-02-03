/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:49:31 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 18:31:49 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "strlcpy" in string.h.
Definition:
	The strlcpy() function copies a string.
	It takes the full size of the buffer (not just
	the length) and guarantees to NULL-terminate the result (as long as size is
	larger than 0).
	Note that a byte for the NULL should be included in size. 
	Also, src must be NULL-terminated.
	The strlcpy() function copies up to size - 1 characters from the NULL-ter‐
	minated string src to dst, NULL-terminating the result.
Return values:
	Returns the total length of the string it tried to create.
	That means the length of src.
@param size The starting position in dest, where src should be added.
*/
int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
