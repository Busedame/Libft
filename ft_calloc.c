/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:16:22 by nholbroo          #+#    #+#             */
/*   Updated: 2025/01/30 13:53:23 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "calloc" in stdlib.h.
Definition:
	The  bzero()  function  erases  the  data  in the n bytes of the memory
	starting at the location pointed to by s, by writing zeros (bytes  con‐
	taining '\0') to that area.
Return values:
	None.
@param s A pointer to the start location of the memory area.
@param n Length of the memory area to be erased.
@param ptr 
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
