/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:56:41 by dacortes          #+#    #+#             */
/*   Updated: 2022/11/16 14:22:22 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	asign;
	size_t	i;

	asign = count * size;
	memory = malloc(asign);
	if (!memory)
		return (0);
	i = 0;
	while (i < asign)
		((char *)memory)[i++] = 0;
	return (memory);
}

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_free(char **buff, char **buff2)
{
	if (buff && *buff)
	{
		free(*buff);
		*buff = NULL;
	}
	if (buff2 && *buff2)
	{
		free(*buff2);
		*buff2 = NULL;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*n_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	n_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!n_str)
		return (NULL);
	while (s1[i])
		n_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		n_str[j++] = s2[i++];
	n_str[j] = '\0';
	return (n_str);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
