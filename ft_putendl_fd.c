/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:04:21 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/23 18:11:20 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0') 
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
/*
int	main()
{
	char	*s = "Hello, world!";
	int		fd;

	fd = open("test2.txt", O_RDWR | O_CREAT, 0666);
	ft_putendl_fd(s, fd);
	close(fd);
}
*/
/*I want to create a file where I want to read/write and 
add whatever I write on top of whatever is there. 
Then I set the permissions to 0666 (read/write)*/