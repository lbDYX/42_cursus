/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:05:50 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 10:30:03 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Toma el largo del dst y garantiza la terminación de null, después realiza 
la copia.
Se verifica el tamaño del src y se pregunta si el dstsize == 0 si es igual 
retorna el len de lo que intento copiar, de lo contrario realiza la copia y se 
garantiza que termine en null al finalizar la copia, retorna el len de lo que 
se copió.*/

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize == 0)
		return (len);
	else if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
