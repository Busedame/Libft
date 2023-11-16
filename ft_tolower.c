/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:40:45 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/14 14:40:46 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main()
{
	int c;
	int d;

	printf("%c\n", c = ft_tolower('B'));
	printf("%c\n", d = tolower('B'));
}
*/
