/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:34:16 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 19:19:33 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

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
