/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:28:48 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/13 12:28:49 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	int	i;
	int	j;

	i = ft_strlen("Hello");
	j = strlen("Hello");
	printf("%d\n", i);
	printf("%d\n", j);
}
*/