/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:35:52 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 14:15:04 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

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
/*
int	main(void)
{
	int	i;
	int	j;

	i = ft_atoi("-2147483649");
	j = atoi("-2147483649");
	printf("%d\n", i);
	printf("%d\n", j);
}
*/