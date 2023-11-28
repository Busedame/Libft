/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:05:42 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 19:34:21 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

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
