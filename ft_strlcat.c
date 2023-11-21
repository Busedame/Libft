/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:23:48 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/20 21:33:13 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <bsd/string.h>

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	totallen;

	j = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	totallen = i + j;
	if (i + 1 < size)
	{
		j = 0;
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0' && i + 1 < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (totallen);
}
/*
int	main()
{
	const char *src = "World";
	const char *srctest = "World";
	char dest[30] = "Hello, ";
	char desttest[30] = "Hello, ";
	size_t size;
	size_t sizetest;
	int	result;
	int	resulttest;

	size = 7;
	sizetest = 7;
	result = ft_strlcat(dest, src, size);
	resulttest = strlcat(desttest, srctest, sizetest);
	printf("%s\n", desttest);
	printf("%s\n", srctest);
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%d\n", result);
	printf("%d\n", resulttest);
	return (0);
}
*/
/*If it won't compile, use -lbsd flags while compiling*/