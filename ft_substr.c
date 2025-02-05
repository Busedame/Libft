/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:58:41 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/28 12:14:02 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Not a standard function in C.
Definition:
	The ft_substr() function take a string s, a start position and
	a length, and returns a portion of string s (starting from start
	position up until length).
	E.g.
	s1 = "abcdef";
	start = 1;
	len = 2;
	sub = "bc";
Return values:
    Upon success, returns the substring of s1.
	Upon memory allocation failure, returns NULL.
@param i Start position of string s (original).
@param j Start position of string sub (substring).
@param start Start position of string s (original).
@param len Length of substring (how many bytes from s should be included).
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sub;
	unsigned int		i;
	unsigned int		j;

	i = start;
	j = 0;
	if (!s || i > UINT_MAX || len > SIZE_MAX)
		return (ft_strdup(""));
	if (len == 0 || start >= (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	while (s[i] != '\0' && j < len)
	{
		i++;
		j++;
	}
	sub = (char *)malloc(j + 1);
	if (sub == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
