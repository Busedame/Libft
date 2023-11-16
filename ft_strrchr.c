/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:46:37 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/14 14:46:39 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = (char *) str;
	while (i > 0 && ptr[i] != c)
		i--;
	return (&ptr[i]);
}
/*
int	main()
{
	const char *str = "Helle";
	const char *teststr = "Helle";
	str = ft_strrchr(str, 'e');
	teststr = strrchr(teststr, 'e');
	printf("My function: %s\n", str);
	printf("Test: %s\n", teststr);
}
*/