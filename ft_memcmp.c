/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:11:12 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/14 16:46:20 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>
//#include <string.h>

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
	while (p1[i] == p2[i] && j > 0)
	{
		i++;
		j--;
	}
	if (j == 0)
		return (0);
	return (p1[i] - p2[i]);
}
/*
int	main()
{
	int	i;
	int	j;

	i = ft_memcmp("Hpllo", "Hello", 2);
	j = memcmp("Hpllo", "Hello", 2);
	printf("%d\n", i);
	printf("%d\n", j);
}
*/