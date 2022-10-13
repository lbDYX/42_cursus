/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:17:48 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/13 11:28:24 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*La función localiza la primera ocurrencia de c y convierte a char el puntero 
 de s.
Se reutiliza la función ft_memchr.*/

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
