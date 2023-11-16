/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:49:31 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 14:15:51 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <bsd/string.h>

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	const char *src = "Hello";
	const char *srctest = "Hello";
	char *dest = malloc(strlen(src) + 1);
	char *desttest = malloc(strlen(srctest) + 1);
	size_t size;
	size_t sizetest;
	int	result;
	int	resulttest;

	if (dest == NULL)
	{
		free(dest);
		return (1);
	}
	if (desttest == NULL)
	{
		free(desttest);
		return (1);
	}
	size = 3;
	sizetest = 3;
	result = ft_strlcpy(dest, src, size);
	resulttest = strlcpy(desttest, srctest, sizetest);
	printf("%d\n", result);
	printf("%d\n", resulttest);
	free(dest);
	free(desttest);
	return (0);
}
*/
/*If it won't compile, use -lbsd flags while compiling*/