/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:09:03 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 11:03:07 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*La función compara el s1 y el s2 y retorna su diferencia a partir del largo 
 que se pasa como parámetro que seria el final de la comparación.*/
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && n - 1 > 0)
	{
		i++;
		n--;
	}
	return (str1[i] - str2[i]);
}
