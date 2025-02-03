/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:18:27 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 18:11:03 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Helper function for ft_split(). Counts how many words in the string. 
Returns count.
E.g. 
s = "a b c"
c = ' '
count = 3
*/
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

/*
Helper function for ft_split(). Fills the already allocated array of strings
(array), with the contents of original string (s), null-terminating each
string. Ultimately, null-terminates the array.
@param cwi Current word index
@param k Index for the source string.
@param j Index for the dest string.
*/
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

/*
Helper function for ft_split(). Dynamically allocates memory for each individual
string of the array.
Upon success, returns the array with correctly sized strings.
Upon memory allocation error, frees all previously allocated memory, and returns
NULL.
@param array The array in which to store the new strings.
@param s The original string
@param c The delimiter
@param count How many words are in the original string (how many new strings are
going to be created.)
@param cwi Current word index.
@param cwstart Current word start, used for memory allocation calculation.
*/
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
		cwi++;
		while (*s == c && *s != '\0')
			s++;
	}
	return (array);
}

/*
Helper function for ft_split(). In the case of an empty string, allocates 
an array of 1 string with 1 byte, and sets it to '\0'.
Returns res (the allocated array).
Returns NULL upon memory allocation failure.
*/
static char	**empty(void)
{
	char	**res;

	res = malloc(sizeof(char *));
	if (!res)
		return (0);
	res[0] = 0;
	return (res);
}

/*
Which function:
	Not a standard function in C.
Definition:
	The ft_split() function takes a string (s) and splits it by a delimiter (c),
	and ultimately stores this is an array of strings. 
	E.g. 
	s = "a b c"
	c = ' '
	Becomes arr = {"a", "b", "c"}
Return values:
	Upon success, returns the array of strings.
	Upon memory allocation error, returns NULL.
@param s The string to be split.
@param c The delimiter.
@param count How many words (parts separated by delimiter) are in the string.
@param array The array which will contain the original string, but split into
several parts, determined by the delimiter.
*/
char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;

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
