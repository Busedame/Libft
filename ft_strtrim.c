/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:21:49 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/28 12:24:11 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_s1_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 1;
	while (s1[i] != '\0' && count > 0)
	{
		count = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				count++;
			}
			else
				j++;
		}
		j = 0;
	}
	return (i);
}

static int	ft_s1_end(char const *s1, char const *set, int k)
{
	int	j;
	int	count;

	j = 0;
	count = 1;
	while (k > 0 && count > 0)
	{
		count = 0;
		while (set[j] != '\0')
		{
			if (s1[k] == set[j])
			{
				k--;
				count++;
			}
			else
				j++;
		}
		j = 0;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = 0;
	while (s1[i] != '\0')
		i++;
	k = i - 1;
	i = ft_s1_start(s1, set);
	k = ft_s1_end(s1, set, k);
	if (i > k)
		return (ft_strdup(""));
	result = (char *)malloc((k - i) + 2);
	if (!result)
		return (NULL);
	j = 0;
	while (i <= k)
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	result[j] = '\0';
	return (result);
}
