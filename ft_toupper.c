/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:34:23 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 19:18:46 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "toupper" in ctype.h.
Definition:
	The toupper() function converts a lower-case letter to the corresponding
	upper-case letter. The argument must be representable as an unsigned
	char or the value of EOF.
Return values:
	If the argument is a lower-case letter, the toupper() function returns
	the corresponding upper-case letter if there is one; otherwise, the argu-
	ment is returned unchanged.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
