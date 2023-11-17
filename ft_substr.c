/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:58:41 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/17 16:18:50 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	while (s[i] != '\0' && i < len)
		i++;
	sub = (char *)malloc(i + 1);
	if (sub == NULL)
		return (NULL);
	i = start;
	while (j < len && s[i] != '\0')
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
/*
int	main()
{
	char const	*s = "";
	char		*sub;

	sub = ft_substr(s, 1, 4);
	printf("%s\n", sub);
	free(sub);
}
*/