/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_cps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:17:07 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/22 09:29:32 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_putchar(int c, int print_f)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	print_f++;
	return (print_f);
}

int	ft_putstr(char *str, int print_f)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		print_f = ft_putchar(str[i++], print_f);
		if (print_f == -1)
			return (-1);
	}
	return (print_f);
}
