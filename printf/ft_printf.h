/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:27:07 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/28 11:27:55 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include<unistd.h>
# include<stdarg.h>

//imprimir str y chr
int	ft_putchar(int c, int print_f);
int	ft_putstr(char *str, int print_f);

//imprimir hexa y punteros
int	ft_putptr(void *ptr, int print_f);
int	ft_puttypex(unsigned int hex, int print_f);
int	ft_converhe_x(unsigned int hex, int print_f);

//para imprimir int y unisigned int
int	ft_puttype_id(int num, int print_f);
int	ft_putnum(unsigned int num, int print_f);

//Validar el type y llamar a la funcion correspondiente
int	ft_printf(char const *str, ...);
int	ft_type(va_list arg, char const type, int print_f);
int	ft_check_str(va_list arg, char const *str, int print_f);
#endif
