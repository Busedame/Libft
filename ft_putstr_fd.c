/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:58:00 by nholbroo          #+#    #+#             */
/*   Updated: 2025/02/03 17:06:12 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Not a standard function in C.
Definition:
	The ft_putstr_fd() function writes a string (s) to the file descriptor 
	(fd).
Return values:
	None.
@param s The string to be written.
@param fd The file descriptor (1 for stdout, 2 for stderr, etc.)
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}
