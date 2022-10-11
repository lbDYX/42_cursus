/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:34:10 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 10:02:38 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Realiza una copia segura de src a dst para evitar solapamiento.
Se verifica si dts y src tienen un valor diferente a 0 o nulll, se pregunta si 
la resta de los tamaños tanto en src como en dst son menores al len solicitado 
y evita que se realice el solapamiento al intentar copiar, de lo contrario 
realiza la copia con normalidad*/

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len -1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
