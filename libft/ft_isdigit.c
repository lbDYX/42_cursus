/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:56:19 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/10 17:05:28 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*La función verifica si es un número retornara 1 de lo contrario retornara 0,
toma el valor de la tabla ascii en entero ejemplo '0' = 48.*/

#include"libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
