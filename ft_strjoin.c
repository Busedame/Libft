/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:29:25 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 18:09:49 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Helper function for ft_strjoin(). This is where the copying happens.
@param i Used for indexing of string result and string s1.
@param j Used for indexing of string s2.
*/
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

/*
Which function:
	Not a standard function in C.
Definition:
	The ft_strjoin() function concatenates two strings (s1 and s2), and returns
	a concatenated string (result).
	E.g.
	s1 = "Hello, "
	s2 = "world!"
	result = "Hello, world!"
Return values:
	Returns a dynamically allocated string containing s1 and s2.
	Upon memory allocation failure, returns NULL.
@param i Used to calculate s1 length.
@param j Used to calculate s2 length.
@param result Stores the final result (string s1 and s2 joined together).
*/
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
