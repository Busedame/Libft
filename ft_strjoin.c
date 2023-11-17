/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:29:25 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/17 16:20:59 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

static char	*ft_strjoin_cat_part(char const *s1, char const *s2, char *result)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		j++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	result = (char *)malloc(i + j + 1);
	if (result == NULL)
		return (NULL);
	ft_strjoin_cat_part(s1, s2, result);
	return (result);
}
/*
int	main()
{
	char const	*s1 = "Hello, ";
	char const	*s2 = "world!";
	char		*result;

	result = ft_strjoin(s1, s2);
	printf("%s\n", result);
	free(result);
}
*/