/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoatest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:42:00 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/22 19:27:59 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_digitcount(int n)
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

static char	*ft_conversion(char *nptr, int n, int end)
{
	int	start;

	start = 0;
	end += 1;
	if (n < 0)
	{
		nptr[start] = '-';
		n *= -1;
		start = 1;
	}
	nptr[end] = '\0';
	end--;
	while (end >= start /*&& n != 0*/)
	{
		nptr[end] = n % 10 + '0';
		n = n / 10;
		end--;
	}
	return (nptr);
}

char	*ft_itoa(int n)
{
	char	*nptr;
	int		digcount;

	digcount = ft_digitcount(n);
	if (n == 0)
	{
		nptr = (char *)malloc(2);
		nptr[0] = '0';
		nptr[1] = '\0';
		return (nptr);
	}
	nptr = (char *)malloc(sizeof(char) * digcount + 1);
	if (!nptr)
		return (NULL);
	nptr = ft_conversion(nptr, n, digcount);
	return (nptr);
}

int	main()
{
	char	*nptr;

	nptr = ft_itoa(123434256);
	printf("%s\n", nptr);
	free(nptr);
}