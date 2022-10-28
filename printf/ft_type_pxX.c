/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_pxX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:15:05 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/28 11:26:05 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_converhex(unsigned long int hex, int print_f)
{
	char	*base;

	base = "0123456789abcdef";
	if (hex >= 16)
	{
		print_f = ft_converhex(hex / 16, print_f);
		if (print_f == -1)
			return (-1);
	}
	print_f = ft_putchar(base[hex % 16], print_f);
	if (print_f == -1)
		return (-1);
	return (print_f);
}

int	ft_puttypex(unsigned int hex, int print_f)
{
	char	*base;

	base = "0123456789abcdef";
	if (hex >= 16)
	{
		print_f = ft_puttypex(hex / 16, print_f);
		if (print_f == -1)
			return (-1);
	}
	print_f = ft_putchar(base[hex % 16], print_f);
	if (print_f == -1)
		return (-1);
	return (print_f);
}

int	ft_converhe_x(unsigned int hex, int print_f)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (hex >= 16)
	{
		print_f = ft_converhe_x(hex / 16, print_f);
		if (print_f == -1)
			return (-1);
	}
	print_f = ft_putchar(base[hex % 16], print_f);
	if (print_f == -1)
		return (-1);
	return (print_f);
}

int	ft_putptr(void *ptr, int print_f)
{
	print_f = ft_putstr("0x", print_f);
	if (print_f == -1)
		return (-1);
	print_f = ft_converhex((unsigned long int)ptr, print_f);
	if (print_f == -1)
		return (-1);
	return (print_f);
}
