/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:42:34 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/13 11:43:23 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') 
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int main()
{
    int i;
    int j;
    int b = 97;
    char k = 'a';
    
    i = ft_isalpha(b);
    j = isalpha(b);
    printf("%d\n", i);
    printf("%d\n", j);
}
*/