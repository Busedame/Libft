/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:21:17 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/23 16:06:34 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
/*
char	f(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z') 
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;
	else
		c = '0';
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main()
{
	char		*result;
	const char	*str = "Hello";
	int			i;

	result = ft_strmapi(str, &f);
	printf("%s\n", result);
	free(result);
}
*/