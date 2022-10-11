/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:00:22 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 09:52:23 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Se usa para copiar un bloque de memoria de una ubicación a otra.i
Se pregunta si dts y src no tienen algo retorne 0 de lo contrario realice la 
copia, también los convierte a unsigned char tanto el dst como el src.*/

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
