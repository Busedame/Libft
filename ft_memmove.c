/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:05:42 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/23 18:36:56 by nholbroo         ###   ########.fr       */
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
/*This is a test that intentionally makes the memory areas overlap*/
/*
int	main()
{
	char src[25] = "12345678910111213";
	char testsrc[25] = "12345678910111213";

	ft_memmove(src + 2, src, 10);
	memmove(testsrc + 2, testsrc, 10);
	printf("%s\n", src);
	printf("%s\n", testsrc);
}
*/

/*This is prob a bad test, but I'm too scared to remove it*/
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