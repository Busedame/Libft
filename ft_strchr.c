/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:46:37 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/27 19:49:59 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	c = c % 256;
	ptr = (char *) str;
	if (c > 127)
		return (NULL);
	while (ptr[i] != '\0' && ptr[i] != c)
		i++;
	if (ptr[i] == '\0' && ptr[i] != c)
		return (NULL);
	return (&ptr[i]);
}
