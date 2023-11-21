/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:18:27 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/21 15:12:32 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_fillarray(char **array, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] == c && s[k - 1] != c)
		{
			array[i][j] = '\0';
			i++;
			j = 0;
			k++;
		}
		else if (s[k] == c && s[k - 1] == c)
			k++;
		else
		{
			array[i][j] = s[k];
			j++;
			k++;
		}
	}
	array[i][j] = '\0';
	array[i + 1] = NULL;
	return (array);
}

static char	**ft_allocatestrings(char **array, char const *s, char c, int count)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < count)
	{
		while (s[k] != c)
			k++;
		array[i] = (char *)malloc((k + 1) * sizeof(char));
		if (!array[i])
		{
			free(array[i]);
			return (NULL);
		}
		while (s[k] == c)
			k++;
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	k = 0;
	if (!*s)
		return (malloc(1));
	count = ft_wordcount(s, c);
	array = (char **)malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_allocatestrings(array, s, c, count);
	array = ft_fillarray(array, s, c);
	return (array);
}

int	main()
{
	char const	*s;
	char		c;
	char		**array;
	int			i;
	int			j;
	int			arraysize;

	s = "Hello,hey,yes,hey,yes,yes,yes";
	c = ',';
	array = ft_split(s, c);
	arraysize = 0;
	while (array[arraysize] != NULL)
		arraysize++;
	i = 0;
	if (arraysize > 0)
	{
		while (i < arraysize)
		{
			printf("%s\n", array[i]);
			free(array[i]);
			i++;
		}
	}
	free(array[i]);
	free(array);
}