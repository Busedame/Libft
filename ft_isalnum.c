/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:01:40 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/13 12:01:42 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main()
{
	int	i;
	int	j;
	int	k = 7;
	char	c = 'a';
	char	d = 48;

	i = ft_isalnum(d);
	j = isalnum(d);
	printf("%d\n", i);
	printf("%d\n", j);
}
*/