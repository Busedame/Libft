/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:42:00 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 18:10:22 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Helper function for ft_itoa(). Counts the amount of digits in the number.
@param n The number to be converted.
@param count Used to count the amount of digits in the number.
*/
static int	ft_digitcount(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

/*
Helper function for ft_itoa(). This is where the actual conversion happens.
@param start Used for indexing. The starting position of the number (either pos 
0 or 1, depending on '-' sign).
@param end Used for indexing. The end position of the number (based on the 
digcount from earlier, so the rightmost position of the final string).
@param n The number to be converted.
@param nptr The pointer to store the converted number.
*/
static char	*ft_conversion(char *nptr, long n, int end)
{
	int	start;

	start = 0;
	if (n < 0)
	{
		nptr[start] = '-';
		n *= -1;
		start = 1;
	}
	nptr[end] = '\0';
	end--;
	while (end >= start)
	{
		nptr[end] = n % 10 + '0';
		n = n / 10;
		end--;
	}
	return (nptr);
}

/*
Which function:
	Not a standard function in C.
Definition:
	The ft_itoa() function converts an integer to the equivalent ascii value (
	as a string instead of a number). E.g. int a = 42 becomes char *nbr = "42".
Return values:
	Upon success, returns a dynamically allocated pointer to the ascii-version 
	of the number.
	Upon error, returns NULL.
@param n The number to be converted.
@param nptr A pointer to the number in ascii format.
@param digcount How many digits does the number consist off.
*/
char	*ft_itoa(int n)
{
	char	*nptr;
	int		digcount;

	digcount = ft_digitcount((long) n);
	if (n == 0)
	{
		nptr = (char *)malloc(2);
		if (!nptr)
			return (NULL);
		nptr[0] = '0';
		nptr[1] = '\0';
		return (nptr);
	}
	nptr = (char *)malloc(sizeof(char) * digcount + 1);
	if (!nptr)
		return (NULL);
	nptr = ft_conversion(nptr, (long) n, digcount);
	return (nptr);
}
