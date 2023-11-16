/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:46:37 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/16 17:46:20 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) str;
	while (ptr[i] != '\0' && ptr[i] != c)
		i++;
	return (&ptr[i]);
}
/*
int	main()
{
	const char *str = "Helle";
	const char *teststr = "Helle";
	str = ft_strchr(str, 'e');
	teststr = strchr(teststr, 'e');
	printf("My function: %s\n", str);
	printf("Test: %s\n", teststr);
}
*/
