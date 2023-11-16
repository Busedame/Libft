/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:25:09 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/14 16:09:04 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <string.h>
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			i;
	unsigned char			j;
	unsigned char			k;
	const unsigned char		*ptr;

	i = 0;
	j = (unsigned char) c;
	k = (unsigned char) n;
	ptr = (const unsigned char *) s;
	while (ptr[i] != c && n - 1 > 0)
	{
		i++;
		n--;
	}
	if (ptr[i] != c)
		return (NULL);
	return ((void *)&ptr[i]);
}
/*
int	main()
{
	char	*ptr;
	char	*ptrtest;
	ptr = ft_memchr("Hello", 'e', 1);
	ptrtest = memchr("Hello", 'e', 1);
	printf("%s\n", ptr);
	printf("%s\n", ptrtest);
}
*/