/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_idu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:15:45 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/28 11:25:38 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_puttype_id(int num, int print_f)
{
	if (num == -2147483648)
	{
		print_f = ft_putstr("-2147483648", print_f);
		if (print_f == -1)
			return (-1);
	}
	else
	{
		if (num < 0)
		{
			print_f = ft_putchar('-', print_f);
			if (print_f == -1)
				return (-1);
			num *= -1;
		}
		print_f = ft_putnum(num, print_f);
		if (print_f == -1)
			return (-1);
		return (print_f);
	}
	return (print_f);
}

int	ft_putnum(unsigned int num, int print_f)
{
	if (num >= 10)
	{
		print_f = ft_putnum(num / 10, print_f);
		if (print_f == -1)
			return (-1);
	}
	print_f = ft_putchar((num % 10) + '0', print_f);
	if (print_f == -1)
		return (-1);
	return (print_f);
}
