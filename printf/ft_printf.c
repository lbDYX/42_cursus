/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:32:56 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/28 11:25:17 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_type(va_list arg, char const type, int print_f)
{
	if (type == '%')
		print_f = ft_putchar('%', print_f);
	if (type == 'c')
		print_f = ft_putchar(va_arg(arg, int), print_f);
	if (type == 's')
		print_f = ft_putstr(va_arg(arg, char *), print_f);
	if (type == 'p')
		print_f = ft_putptr(va_arg(arg, void *), print_f);
	if (type == 'i' || type == 'd')
		print_f = ft_puttype_id(va_arg(arg, int), print_f);
	if (type == 'u')
		print_f = ft_putnum(va_arg(arg, unsigned int), print_f);
	if (type == 'x')
		print_f = ft_puttypex(va_arg(arg, unsigned int), print_f);
	if (type == 'X')
		print_f = ft_converhe_x(va_arg(arg, unsigned int), print_f);
	return (print_f);
}

int	ft_check_str(va_list arg, char const *str, int print_f)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_f = ft_type(arg, str[i + 1], print_f);
			if (print_f == -1)
				return (-1);
			i++;
		}
		else
		{
			print_f = ft_putchar(str[i], print_f);
			if (print_f == -1)
				return (-1);
		}
		i++;
	}
	return (print_f);
}

int	ft_printf(char const *str, ...)
{
	int		print_f;
	va_list	arg;

	print_f = 0;
	va_start(arg, str);
	print_f = ft_check_str(arg, str, print_f);
	va_end(arg);
	return (print_f);
}
