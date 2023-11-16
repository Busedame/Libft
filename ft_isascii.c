/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:18:19 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/13 12:18:21 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
	char	d = 128;

	i = ft_isalnum(d);
	j = isalnum(d);
	printf("%d\n", i);
	printf("%d\n", j);
}
*/