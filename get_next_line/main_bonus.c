/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:00:48 by dacortes          #+#    #+#             */
/*   Updated: 2022/11/17 15:51:20 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"
#include <fcntl.h>

#define END "\033[m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"

#define ligth "\033[1m"
#define dark  "\033[2m"
#define italic "\033[3m"

int	main(void)
{
	int	fd = open("arch_txt/multiple_nl.txt", O_RDONLY);
	int fd1 = open("arch_txt/multiple_nl.txt", O_RDONLY);
	char	*line;
	int i = 1;

	line = NULL;
	if (fd < 0)
	{
		printf(RED"Error!!"YELLOW"-->memory allocation\n"END);
		return (0);
	}
	printf(BLUE"FD [giant_line.txt]\n"END);
	while (i < BUFFER_SIZE)
	{
		line = get_next_line(fd1);
		printf("line ["YELLOW"%d"END"]"GREEN" content :"END"%s", i++, line);
		printf(YELLOW"\n-->"END"numbers bytes ["GREEN ligth"%lu"END"]\n",ft_strlen(line));
		if (line == NULL)
			break ;
	}
	i = 1;
	printf(BLUE"\nFD [multiple_nl.txt]\n"END);
	while (i < BUFFER_SIZE)
	{
		line = get_next_line(fd);
		printf("line ["YELLOW"%d"END"]"GREEN" content :"END"%s", i++, line);
		printf(YELLOW"\n-->"END"numbers bytes ["GREEN ligth"%lu"END"]\n",ft_strlen(line));
		if (line == NULL)
			break ;
	}
	free(line);
	return (0);
}
