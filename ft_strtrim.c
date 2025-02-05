/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:21:49 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/28 12:24:11 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Helper function for ft_strtrim(). Sets and returns k, which is set to
the first position where string set is NOT present.
E.g.
s1 = "abcabc";
set = "c";
i = "(a)bcabc" = 0;
*/
static int	ft_s1_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 1;
	while (s1[i] != '\0' && count > 0)
	{
		count = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				count++;
			}
			else
				j++;
		}
		j = 0;
	}
	return (i);
}

/*
Helper function for ft_strtrim(). Sets and returns k, which is set to
the last position where string set is NOT present.
E.g.
s1 = "abcabc";
set = "b";
k = "abcab(c)" = 5;
*/
static int	ft_s1_end(char const *s1, char const *set, int k)
{
	int	j;
	int	count;

	j = 0;
	count = 1;
	while (k > 0 && count > 0)
	{
		count = 0;
		while (set[j] != '\0')
		{
			if (s1[k] == set[j])
			{
				k--;
				count++;
			}
			else
				j++;
		}
		j = 0;
	}
	return (k);
}

/*
Which function:
	Not a standard function in C.
Definition:
	The ft_strtrim() function trims string s1 with the characters of string set.
	Whichever characters that are part of set, are removed from s1 and the modified
	string is returned.
	E.g. 
	s1 = "abc";
	set = "aaaaa";
	result = "bc";
Return values:
	Upon success, returns result (string s1 without the characters of string set).
	Upon memory allocation failure, returns NULL.
@param i Start position of s1 (the first position where a character from string
set is NOT present).
@param j Index for result.
@param k End position of s1 (the last position where a character from string set
is NOT present).
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = 0;
	while (s1[i] != '\0')
		i++;
	k = i - 1;
	i = ft_s1_start(s1, set);
	k = ft_s1_end(s1, set, k);
	if (i > k)
		return (ft_strdup(""));
	result = (char *)malloc((k - i) + 2);
	if (!result)
		return (NULL);
	j = 0;
	while (i <= k)
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
