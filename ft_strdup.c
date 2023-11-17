/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:41:16 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 17:57:48 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
//#include <string.h>
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char		*dup;
	int			i;
	size_t		len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main()
{
	char 		*dup;
	char		*testdup;
	char		*errorcheck;

	dup = ft_strdup("Hello");
	testdup = strdup("Hello");
	errorcheck = strerror(errno);
	printf("%s\n", errorcheck);
	printf("%s\n", dup);
	printf("%s\n", testdup);
	free(dup);
	free(testdup);
}
*/