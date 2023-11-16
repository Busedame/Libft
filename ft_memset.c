/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:34:16 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 18:20:01 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <string.h>
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*byteptr;
	unsigned char	bytevalue;

	i = 0;
	byteptr = s;
	bytevalue = c;
	while (i < n) 
	{
		byteptr[i] = bytevalue;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	ptr[50];
	char	str[50];

	ft_memset(ptr, 'H', 20);
	memset(str, 'H', 20);
	printf("%s\n", ptr);
	printf("%s\n", str);
}
*/