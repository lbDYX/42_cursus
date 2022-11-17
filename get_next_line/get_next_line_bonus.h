/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:45:10 by dacortes          #+#    #+#             */
/*   Updated: 2022/11/17 10:45:40 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_free(char **buff, char **buff2);
void	*ft_calloc(size_t count, size_t size);

char	*get_next_line(int fd);
char	*ft_next_buff(char *buf);
char	*ft_next_line(char *buf, char *line);
char	*ft_read_fd(int fd, char *buf, int bytes);

char	*ft_protec_join(char *buffer, char *reader);
#endif
