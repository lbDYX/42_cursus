/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:45:23 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/13 11:18:02 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (n[0] == '\0')
		return ((char *)h);
	j = 0;
	while (j < len && h[j])
	{
		i = 0;
		while (j < len && n[i] && h[i] && n[i] == h[j])
		{
			i++;
			j++;
		}
		if (n[i] == '\0')
			return ((char *)&h [j - i]);
		j = j - i + 1;
	}
	return (NULL);
}
