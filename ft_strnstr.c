/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:27:51 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 20:05:41 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "strnstr" in string.h.
Definition:
    The strnstr() function locates the first occurrence of the null-termi-
    nated string little in the string big, where not more than len 
	characters are searched. Characters that appear after a `\0' character 
	are not searched.
	Since the strnstr() function is a FreeBSD specific API, it
    should only be used when portability is not a concern.
Return values:
    If needle is an empty string, haystack is returned.
	If needle occurs nowhere in haystack, NULL is returned.
	Otherwise a pointer to the first character of the first occurrence 
	of needle is returned.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && ((i + j) < len))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
