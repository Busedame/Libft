/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:44:35 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 15:43:28 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "isdigit" in ctype.h.
Definition:
	The isdigit() function checks whether c, which must have the value of an un‐
	signed char or EOF, is a numerical character (0-9).
Return values:
	Returns 1 if c is numerical.
	Returns 0 if c is NOT numerical.
@param c The character to be checked.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
