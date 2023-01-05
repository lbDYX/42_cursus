/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:54:39 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 09:21:11 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Copia los caracteres o un carácter sin signo a los puntos argumentados por 
la cadena.
Convierte el puntero de b a un unsigned char y realiza la copia retorna el 
puntero de b.
b = destino, c = al carácter/s len = es la cantidad de caracteres que se 
desea copiar.*/

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
