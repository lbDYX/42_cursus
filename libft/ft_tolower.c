/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:54:48 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/10 17:22:35 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*La función verifica si es una letra mayúscula y la convierte en minúscula de 
lo contrario retorna el parámetro ingresado*/

#include"libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
