/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:39:13 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/13 10:59:35 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	h;

	str = (char *)s;
	i = ft_strlen(s);
	h = c;
	while (i >= 0)
	{
		if (str == 0)
			return (NULL);
		if (str == NULL)
			return (str);
		if (str[i] == h)
			return (str + i);
		i--;
	}
	return (NULL);
}
