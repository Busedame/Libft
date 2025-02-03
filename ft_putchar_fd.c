/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:33:28 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 16:58:32 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Not a standard function in C.
Definition:
	The ft_putchar_fd() function writes one byte (c) to the file descriptor 
	(fd).
Return values:
	None.
@param c The byte value to be written.
@param fd The file descriptor (1 for stdout, 2 for stderr, etc.)
*/
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
