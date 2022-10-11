/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:12:23 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/10 17:00:31 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
/*La función verifica si es una letra minúsculas o mayúsculas,
toma el valor de la tabla ascii en entero ejemplo a = 97 se
puede ingresar tanto 'a' como 97 y validara si está en el rango.
retorna 1 si es una letra*/
int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
