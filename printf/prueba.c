/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:26:07 by dacortes          #+#    #+#             */
/*   Updated: 2022/10/22 12:48:36 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include"libftprintf.h"

int	main(void)
{
	char c;
	char *str;

	str = &c;
	//Pruebas con punteros
	//printf("\n%d\n",ft_printf("%p", ""));
	//printf("\n%d\n",printf("%p", ""));
	//Prueba con el min int
	//ft_printf("%i\n", -2147483648);
	//printf("%li\n", -2147483648);
	//Prueba comn el max int
	//ft_printf("%d\n", 2147483647);
	//printf("%d\n", 2147483647);
	//Prueba pasando el max
	//ft_printf("%d\n", 2147483648);
	//printf("%d\n", 2147483648);
	//ft_printf("%d\n", 10);
	//ft_printf("%X", -10);
	//printf("\n%X", -10);
	printf("\n%d\n",ft_printf("pbP4q%%%sPgRBW92i?G%iW|R3kHHK-%p\vo4}J8,o'R%xaMZyl_C%sf#myo%xB&S%us om$#", "k\f8U<8x];47An4@/h5,S}x+V\vT|jE{3?ZYJ8|qz83\vC+5\"%\"E^)b*XOVp]vA|HV*:o",
			423686097, (void *)2709297554656386051, 530392026, "~4I\t>&P17oy]V", -226324761, -565176650));
	ft_printf("\n%d\n", ft_printf("pbP4q%%%sPgRBW92i?G%iW|R3kHHK-%p\vo4}J8,o'R%xaMZyl_C%sf#myo%xB&S%us om$#", "k\f8U<8x];47An4@/h5,S}x+V\vT|jE{3?ZYJ8|qz83\vC+5\"%\"E^)b*XOVp]vA|HV*:o",423686097, (void *)2709297554656386051, 530392026, "~4I\t>&P17oy]V", -226324761, -565176650));
ft_printf("U[wt,F%sV%x`?%Xd %dWR'~G%iZ_H%dSm\fx%x&#Bo53i%d\tR%c_\v rJ", "$D](r#~Bo9I3Rl8q@V\f>tj+U\\}Q", 498290837, 653595966, 1770864023, 430814070, 278830743, -259010542, 1657474602, 1668381637);
	return (0);
}
