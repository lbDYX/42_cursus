/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:02 by dacortes          #+#    #+#             */
/*   Updated: 2022/09/29 11:08:51 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	asig;
	void	*res;

	asig = size * count;
	res = malloc(asig);
	if (!res)
		return (0);
	ft_memset(res, 0, asig);
	return (res);
}
