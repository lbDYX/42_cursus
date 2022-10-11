/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:53:43 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/10 17:17:01 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* La función verifica si es un número o una letra minúscula o mayúscula
 retornara 1 de lo contrario 0. Se utilizan las funciones ft_isalpha y 
ft_isdigit para hacer el código más corto.*/

#include"libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c))
		return (1);
	else if (ft_isdigit(c))
		return (1);
	else
		return (0);
}
