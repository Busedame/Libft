/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:01:19 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/13 15:01:21 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <strings.h>
//#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = str;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*
int	main()
{
	char str[10] = "Hello";
	char ptr[10] = "Hello";

	ft_bzero(str, sizeof(str));
	bzero(ptr, sizeof(ptr));
	printf("%s\n", str);
	printf("%s\n", ptr);
	return (0);
}
*/