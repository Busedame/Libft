/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:05:42 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 21:26:46 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	size_t				j;
	unsigned char		*destptr;
	const unsigned char	*srcptr;

	i = 0;
	destptr = dest;
	srcptr = src;
	j = n - 1;
	if (dest < src)
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

	ft_memmove(dest, src, strlen(src) + 1);
	memmove(testdest, testsrc, strlen(testsrc) + 1);
	printf("%s\n", dest);
	printf("%s\n", testdest);
	free(dest);
	free(testdest);
}
*/