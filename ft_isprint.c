/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:24:41 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 15:44:12 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "isprint" in ctype.h.
Definition:
	The isprint() function checks whether c, which must have the value of an un‐
	signed char or EOF, is a printable character (32-126 as ascii value).
Return values:
	Returns 1 if c is printable.
	Returns 0 if c is NOT printable.
@param c The character to be checked.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
