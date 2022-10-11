/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:32:47 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/10 17:20:57 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*La función verifica si es una letra minúscula y la convierte en mayúscula de 
 lo contrario retorna el parámetro ingresado*/

#include"libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
