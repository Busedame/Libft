/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:18:27 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/28 12:30:11 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	**ft_fillarray(char **array, char const *s, char c)
{
	int	cwi;
	int	j;
	int	k;

	cwi = 0;
	j = 0;
	k = 0;
	while (s[k] != '\0')
	{
		if (k > 0 && s[k] == c && s[k - 1] != c)
		{
			array[cwi++][j] = '\0';
			j = 0;
		}
		else if (s[k] != c)
		{
			array[cwi][j] = s[k];
			j++;
		}
		k++;
	}
	if (j != 0)
		array[cwi++][j] = '\0';
	array[cwi] = NULL;
	return (array);
}

static char	**ft_allocatestrings(char **array, char *s, char c, int count)
{
	int		cwi;
	char	*cwstart;

	cwi = 0;
	while (*s == c && *s != '\0')
		s++;
	while (cwi < count)
	{
		cwstart = s;
		while (*s != c && *s != '\0')
			s++;
		array[cwi] = (char *)malloc((s - cwstart + 1) * sizeof(char));
		if (!array[cwi])
		{
			while (--cwi >= 0)
				free(array[cwi]);
			free(array);
			return (NULL);
		}
		cwi ++;
		while (*s == c && *s != '\0')
			s++;
	}
	return (array);
}

static char	**empty(void)
{
	char	**res;

	res = malloc(sizeof(char *));
	if (!res)
		return (0);
	res[0] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		k;
	int		count;

	i = 0;
	k = 0;
	if (!*s)
		return (empty());
	count = ft_wordcount(s, c);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_allocatestrings(array, (char *)s, c, count);
	if (!array)
		return (0);
	array = ft_fillarray(array, s, c);
	return (array);
}
