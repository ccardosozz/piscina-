/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   increment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 22:05:55 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/08 16:27:31 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_print_grad(int grad[4][4])
{
	int	line_h;
	int	col_v;
	char	c;

	line_h = 0;
	while (line_h < 4)
	{
		col_v = 0;
		while (col_v < 4)
		{
			c = grad[line_h][col_v] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			col_v ++;
		}
		write(1, "\n", 1);
	line_h++;
	}
}

void	ft_filling(int matriz)
{
	int	line_h;
	int	col_v;
	int	n;

	n = 2;

	line_h = 1;
	while (line_h < 4)
	{
		col_v = 0;
		while (col_v < 4)
		{
			grad[line_h][col_v] = n;
			col_v ++;
		}
		write(1, "\n", 1);
	line_h++;
	}	
}

int	main(void)
{
	int	matriz;

	ft_print_grad(matriz);
	return (0);
}
