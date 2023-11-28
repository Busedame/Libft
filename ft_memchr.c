/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:25:09 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 20:00:46 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

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
