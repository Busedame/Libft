/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:25:21 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 17:05:34 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Helper function for ft_putnbr_fd(). This is where the actual conversion and
writing happens.
@param str The string that will store the converted number.
@param n The integer value to be converted and written.
@param fd The file descriptor (1 for stdout, 2 for stderr, etc.)
*/
static void	ft_nbwrite(char *str, int n, int fd)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	str[i--] = '\0';
	while (i >= 0)
		write(fd, &str[i--], 1);
}

/*
Which function:
	Not a standard function in C.
Definition:
	The ft_putnbr_fd() function writes a number of type integer to the file 
	descriptor (fd). It converts the number from integer to ascii, and then
	writes it to fd.
Return values:
	None.
@param n The integer value to be converted and written.
@param fd The file descriptor (1 for stdout, 2 for stderr, etc.)
@param str The string that will store the converted number. Statically allocated
to 12 bytes, to be able to handle all possible integer values.
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	ft_nbwrite(str, n, fd);
}
