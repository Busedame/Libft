/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:42:34 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 15:43:04 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "isalpha" in ctype.h.
Definition:
	The isalpha() function checks whether c, which must have the value of an un‐
	signed char or EOF, is an alphabetical character (a-z, A-Z).
Return values:
	Returns 1 if c is alphabetical.
	Returns 0 if c is NOT alphabetical.
@param c The character to be checked.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') 
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
