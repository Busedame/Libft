/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:46:37 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 17:56:24 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "strchr" in stdlib.h.
Definition:
	The  strchr() function returns a pointer to the first occurrence of the
	character c in the string s.
Return values:
	Returns a pointer to the matched character or NULL if the character is
	not found.
	The terminating null byte is considered part of the string, so that if
	c  is  specified  as '\0', these functions return a pointer to the 
	terminator.
@param str The string to be scanned.
@param ptr A pointer to str -> typecasted to (char *),
since str is (const char *).
@param c The character to be searched for.
*/
char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	c = c % 256;
	ptr = (char *) str;
	if (c > 127)
		return (NULL);
	while (ptr[i] != '\0' && ptr[i] != c)
		i++;
	if (ptr[i] == '\0' && ptr[i] != c)
		return (NULL);
	return (&ptr[i]);
}
