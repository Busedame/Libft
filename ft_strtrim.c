/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:21:49 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/17 21:08:33 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;
	int		k;
	int		setlen;
	int		count;

	i = 0;
	setlen = 0;
	while (s1[i] != '\0')
		i++;
	while (set[setlen] != '\0')
		setlen++;
	k = i;
	result = (char *)malloc(k + 1);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	count = 1;
	while (s1[i] != '\0')
	{
		if (strrchr(&s1[i], &set[j]) != '\0')
			i++;
		else
			break ;
	}
	while (s1[k] != s1[0])
	{
		if (strrchr(&s1[i], &set[j]) != '\0')
			i++;
		else
			break ;
	}
	/*
	while (count > 0)
	{
		count = 0;
		while (set[j] != set[setlen])
		{
			if (s1[i] == set[j])
			{
				i++;
				count++;
			}
			else if (s1[k] == set[j])
			{
				k--;
				count++;
			}
			j++;
		}
		j = 0;
	}
	j = 0;
	*/
	while (s1[i] <= s1[k])
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	return (result);
}

int	main()
{
	char const	*s1 = "aaabbbaHalla ballaisabbaba";
	char const	*set = "ab";
	char		*result;

	result = ft_strtrim(s1, set);
	printf("%s\n", result);
}