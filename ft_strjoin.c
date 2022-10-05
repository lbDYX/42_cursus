/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:30:12 by dacortes          #+#    #+#             */
/*   Updated: 2022/09/29 12:27:36 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*n_str;

	i = 0;
	j = 0;
	n_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!n_str)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("\0");
	else
	{
		while (s1[i] != '\0')
			n_str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
		n_str[j++] = s2[i++];
	n_str[j] = '\0';
	return (n_str);
}
