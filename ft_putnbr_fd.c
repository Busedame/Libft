/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:25:21 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/23 18:10:51 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <fcntl.h>

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
/*
int	main()
{
	int	n;
	int	fd;

	n = 214748364;
	fd = open("test.txt", O_RDWR | O_CREAT, 0666);
	ft_putnbr_fd(n, fd);
	close(fd);
}
*/