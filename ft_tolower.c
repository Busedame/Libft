/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:40:45 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 20:02:35 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "tolower" in ctype.h.
Definition:
    The tolower() function converts an upper-case letter to the corresponding
    lower-case letter. The argument must be representable as an unsigned
    char or the value of EOF.
Return values:
    If the argument is an upper-case letter, the tolower() function returns
    the corresponding lower-case letter if there is one; otherwise, the argu-
    ment is returned unchanged.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
