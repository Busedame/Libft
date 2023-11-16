/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:29:25 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 21:00:26 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	len = i + j;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		result[i] = (char *)s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		result[i] = (char *)s2[j];
		j++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

int	main()
{
	char const	*s1 = "Hello, ";
	char const	*s2 = "world!";
	char		*result;
	
	result = ft_strjoin(s1, s2);
	printf("%s\n", result);
}