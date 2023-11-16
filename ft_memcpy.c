/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:38:26 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 21:26:31 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destptr;
	const unsigned char	*srcptr;

	i = 0;
	srcptr = src;
	destptr = dest;
	while (i < n)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	const char *src = "12345678910111213";
	char *dest = malloc(strlen(src) + 1);
	if (dest == NULL)
	{
		free(dest);
		return(1);
	}
	const char *testsrc = "12345678910111213";
	char *testdest = malloc(strlen(testsrc) + 1);
	if (testdest == NULL)
	{
		free(testdest);
		return(1);
	}

	ft_memcpy(dest, src, strlen(src) + 1);
	memcpy(testdest, testsrc, strlen(testsrc) + 1);
	printf("%s\n", dest);
	printf("%s\n", testdest);
	free(dest);
	free(testdest);
}
*/