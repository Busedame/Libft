/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:01:40 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 15:43:19 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "isalnum" in ctype.h.
Definition:
	The isalnum() function checks whether c, which must have the value of an un‐
	signed char or EOF, is an alphabetical or numerical character (a-z, A-Z, 
	0-9).
Return values:
	Returns 1 if c is alphanumerical.
	Returns 0 if c is NOT alphanumerical.
@param c The character to be checked.
*/
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
