/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:16:22 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 15:36:58 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "calloc" in stdlib.h.
Definition:
	The calloc() function allocates memory for an array of  nmemb  elements
	of size bytes each and returns a pointer to the allocated memory.  The
	memory is set to zero.
Return values:
	If nmemb or size is 0, then calloc() returns
	either NULL, or a unique pointer value that can later be successfully
	passed to free().
	If the multiplication of nmemb and size would result in integer overflow, 
	then calloc() returns an error.
@param nmemb How many elements.
@param size How many bytes is each element.
@param arr The allocated array to be returned.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	if ((nmemb * size) > 2147483647)
		return (NULL);
	arr = (unsigned char *)malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	while (i < nmemb * size)
		arr[i++] = 0;
	return ((void *) arr);
}
