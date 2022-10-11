/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                          :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:19:20 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 10:47:14 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Agrega la cadena de src al final de dst se agregará como máximo del dstsize.
Se pregunta si el size es mayor al len del dst, se crea una variable resultado 
en caso de que sea mayor el resultado será igual a la suma del los len del dst 
y src de lo contrario será igual al len del src más el size, se realiza la copia 
a partir de la última posición del dst y se garantiza la terminación en null 
de la copia, retorna el len total de la copia (resultado).*/

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}
