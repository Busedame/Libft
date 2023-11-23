/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:16:22 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/23 18:35:01 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
//#include <string.h>
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if ((nmemb * size) > 2147483647)
		return (NULL);
	arr = (unsigned char *)malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *) arr);
}
/*
int	main()
{
	unsigned char	*arr;
	unsigned char	*arrtest;
	size_t			i;
	size_t			nmemb;
	size_t			size;

	i = 0;
	nmemb = 20;
	size = 20;
	arr = ((unsigned char *)ft_calloc(nmemb, size));
	arrtest = ((unsigned char *)calloc(nmemb, size));
	if (arr == NULL)
	{
		printf("My code: Memory allocation error\n");
	}
	if (arrtest == NULL)
	{
		printf("Test: Memory allocation error\n");
		return (1);
	}
	if (arr != NULL && nmemb == 0 && size == 0)
	{
		printf("My code: Size and nmemb are both 0, a unique pointer is returned\n");
		free(arr);
	}
	if (arrtest != NULL && nmemb == 0 && size == 0)
	{
		printf("Test: Size and nmemb are both 0, a unique pointer is returned\n");
		free(arrtest);
		return (1);
	}
	printf("My code:\n");
	while (i < (nmemb * size))
	{
		printf("%hhu", arr[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("Test:\n");
	while (i < (nmemb * size))
	{
		printf("%hhu", arrtest[i]);
		i++;
	}
	printf("\n");
	free(arr);
	free(arrtest);
}
*/