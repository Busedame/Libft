/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:44:35 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/13 11:55:49 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
    int i;
    int j;
    int k = 48;
    char c = 'a';
    char d = '0';

    i = ft_isdigit(k);
    j = isdigit(k);
    printf("%d\n", i);
    printf("%d\n", j);
}
*/
