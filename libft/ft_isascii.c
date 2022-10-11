/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:42:48 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/10 18:08:33 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Verifica si está dentro del rango de 0 a 127 en valor a retornar será 1 si
esta dentro del rango de lo contrario retornara 0*/

#include"libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
