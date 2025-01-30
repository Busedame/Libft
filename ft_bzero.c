/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nholbroo <nholbroo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:01:19 by nholbroo          #+#    #+#             */
/*   Updated: 2025/01/30 13:52:44 by nholbroo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Which function:
	Equivalent to the function "bzero" in strings.h.
Definition:
	The  bzero()  function  erases  the  data  in the n bytes of the memory
	starting at the location pointed to by s, by writing zeros (bytes  con‐
	taining '\0') to that area.
Return values:
	None.
@param s A pointer to the start location of the memory area.
@param n Length of the memory area to be erased.
@param ptr A char pointer used for typecasting so ascii value '\0' can be 
placed.
*/
void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = str;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
