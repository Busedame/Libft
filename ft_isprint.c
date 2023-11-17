/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:24:41 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/13 12:24:42 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	char	d = 126;

	i = ft_isprint(d);
	j = isprint(d);
	printf("%d\n", i);
	printf("%d\n", j);
}
*/