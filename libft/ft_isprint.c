/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:58:56 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 09:00:44 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*La función verifica si esta en el rango de los caracteres imprimibles de la 
tabla ascii, retorna 1 si lo esta y 0 de lo contrario.*/

#include"libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
