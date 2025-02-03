/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:18:19 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 15:42:03 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "isascii" in ctype.h.
Definition:
	The isascii() function checks whether c, which must have the value of an un‐
	signed char or EOF, is an ascii value (between 0 and 127).
Return values:
	Returns 1 if c is an ascii value.
	Returns 0 if c is NOT an ascii value.
@param c The character to be checked.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
