/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:11:12 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 20:02:16 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		i;
	unsigned char		j;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	j = (unsigned char) n;
	p1 = (const unsigned char *) s1;
	p2 = (const unsigned char *) s2;
	while (p1[i] == p2[i] && j > 1)
	{
		i++;
		j--;
	}
	if (j >= 1)
		return (p1[i] - p2[i]);
	return (0);
}
