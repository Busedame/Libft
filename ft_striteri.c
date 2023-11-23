/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:07:35 by nholbroo          #+#    #+#             */
/*   Updated: 2023/11/23 16:32:33 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/*
void	f(unsigned int i, char *s)
{
	if (s[i] >= 'a' && s[i] <= 'z') 
		s[i] -= 32;
	else if (s[i] >= 'A' && s[i] <= 'Z')
		s[i] += 32;
	else
		s[i] = '0';
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main()
{
	char	s[6] = "Hello";

	ft_striteri(s, &f);
	printf("%s\n", s);
}
*/