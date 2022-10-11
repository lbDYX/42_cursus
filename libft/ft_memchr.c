/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:20:55 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 10:55:56 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Busca la primera ocurrencia de c, convierte a unsigned char el valor a
retornar, si no encuentra el carácter solicitado retorna NULL.*/

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
