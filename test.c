/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:05:42 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 21:42:56 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t				i;
	size_t				j;
	unsigned char		*destptr;
	unsigned char		*srcptr;

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

int	main()
{
	void	*src = "12345678910111213";
	void	*testsrc = "12345678910111213";
	char	*result1;
	char	*result2;

	result1 = ft_memmove(src, src, strlen(src) + 1);
	result2 = memmove(testsrc, testsrc, strlen(testsrc) + 1);
	printf("%s\n", result1);
	printf("%s\n", result2);
}