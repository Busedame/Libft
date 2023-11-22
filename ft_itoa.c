/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:42:00 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/22 17:41:33 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_digitcount(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_revstring(char *nptr, int i)
{
	int		len;
	char	*temp;
	int		j;

	j = 0;
	len = i;
	temp = (char *)malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	i--;
	if (nptr[0] == '-')
	{
		temp[j] = '-';
		j++;
	}
	while (j < len)
	{
		if (nptr[i] == nptr[0] && nptr[0] == '-')
			break ;
		temp[j++] = nptr[i--];
	}
	temp[j] = '\0';
	return (temp);
}

char	*ft_itoa(int n)
{
	char	*nptr;
	char	*temp;
	int		i;
	int		j;
	int		digcount;

	i = 0;
	j = 0;
	digcount = ft_digitcount(n);
	if (n < 0)
		digcount++;
	nptr = (char *)malloc(sizeof(char) * digcount + 1);
	if (!nptr)
		return (NULL);
	if (n < 0)
	{
		nptr[i++] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		nptr[i++] = n % 10 + '0';
		n = n / 10;
	}
	nptr[i] = '\0';
	temp = ft_revstring(nptr, i);
	return (temp);
}

int	main()
{
	char	*nptr;

	nptr = ft_itoa(123456);
	printf("%s\n", nptr);
	free(nptr);
}