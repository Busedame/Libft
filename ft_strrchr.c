/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:46:37 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 17:57:10 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "strrchr" in stdlib.h.
Definition:
	The  strrchr() function returns a pointer to the last occurrence of the
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
char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	c = c % 256;
	while (str[i] != '\0')
		i++;
	ptr = (char *) str;
	while (i > 0 && ptr[i] != c)
		i--;
	if (ptr[i] != c && ptr[i] == ptr[0])
		return (NULL);
	return (&ptr[i]);
}
