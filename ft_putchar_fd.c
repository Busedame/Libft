/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:33:28 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/23 16:57:41 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main()
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_APPEND);
	fd = open("test.txt", 666);
	ft_putchar_fd('e', fd);
	close(fd);
}
*/