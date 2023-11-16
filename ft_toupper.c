/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:34:23 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/14 14:34:24 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main()
{
	int c;
	int d;

	printf("%c\n", c = ft_toupper('1'));
	printf("%c\n", d = toupper('1'));
}
*/