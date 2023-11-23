/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:25:09 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/23 21:56:39 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <string.h>
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			i;
	const unsigned char		*ptr;

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
/*
int	main()
{
	char	*ptr;
	char	*ptrtest;
	ptr = ft_memchr("Hello", 'e', 5);
	ptrtest = memchr("Hello", 'e', 5);
	printf("%s\n", ptr);
	printf("%s\n", ptrtest);
}
*/