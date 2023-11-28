/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:58:41 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/28 12:14:02 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <limits.h>
#include <stdint.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*sub;
	unsigned int		i;
	unsigned int		j;

	i = start;
	j = 0;
	if (!s || i > UINT_MAX || len > SIZE_MAX)
		return (ft_strdup(""));
	if (len == 0 || start >= (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	while (s[i] != '\0' && j < len)
	{
		i++;
		j++;
	}
	sub = (char *)malloc(j + 1);
	if (sub == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}
