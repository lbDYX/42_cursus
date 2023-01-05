/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:13:31 by dacortes          #+#    #+#             */
/*   Updated: 2023/01/05 16:14:44 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"miniLibX/mlx.h"
#include"libft/libft.h"
#include<math.h>
void lineX(void *mlx, void *win, int x, int y, int end)
{
	while(1)
	{
		mlx_pixel_put ( mlx, win, x++, y, 255);
		if (x == end)
			break;
	}
}
void lineY(void *mlx, void *win, int x, int y, int end)
{
	while(1)
	{
		mlx_pixel_put ( mlx, win, x, y++, 255);
		if (y == end)
			break;
	}
}
int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	int a = 960;//(x)
	int b = 500;//(Y)
	int c = 500;//(y)
	int d = 500;//(y)
	int e = 960;//(x)

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");

	//Cuadrado
	lineX(mlx, mlx_win, 960, 500, 1460);
	lineX(mlx, mlx_win, 960, 1000, 1460);
	lineY(mlx, mlx_win, 1460, 500, 1000);
	lineY(mlx, mlx_win, 960, 500, 1000);
	mlx_loop(mlx);
}
