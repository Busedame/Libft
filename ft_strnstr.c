/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:27:51 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 14:15:40 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <bsd/string.h>
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (big[i] != '\0' && little[j] != '\0' && len > 0)
	{
		if (big[i + j] == little[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
		len--;
	}
	if (j == 0)
		return (NULL);
	return ((char *)&big[i]);
}
/*
int	main()
{
	const char	*big = "abcghdef";
	const char	*little = "";
	const char	*testbig = "abcghdef";
	const char	*testlittle = "";
	char	*result;
	char	*testresult;
	result = ft_strnstr(big, little, 3);
	testresult = strnstr(testbig, testlittle, 3);
	printf("%s\n", result);
	printf("%s\n", testresult);
}
*/
/*If it won't compile, use -lbsd flags while compiling*/