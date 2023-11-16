/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:09:25 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/14 15:09:26 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0'
		&& s2[i] != '\0' && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	int	i;
	int	j;
	i = ft_strncmp("Peylo", "Hel", 1);
	j = strncmp("Peylo", "Hel", 1);
	printf("%d\n", i);
	printf("%d\n", j);
}
*/