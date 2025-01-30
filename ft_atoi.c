/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:35:52 by nholbroo          #+#    #+#             */
/*   Updated: 2025/01/30 13:48:14 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "atoi" in stdlib.h.
Definition:
	The  atoi() function converts the initial portion of the string pointed
	to by nptr to int.
Return values:
	If successful -> The converted number.
	If error -> Returns 0. Doesn't set errno, so not possible to distinguish 
	the number '0' from error.
@param nptr The number in ascii (as a string).
@param result The number as an int.
@param sign Indicates if the number is negative or positive.
*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;	

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13)
		|| (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
