/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:07:36 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/11 09:45:50 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Se utiliza la función bzero para poner a cero la región de memoria en C.
Se reutiliza la función ft_memset   se pasa como parámetro 0 en el c del 
memset.*/

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
