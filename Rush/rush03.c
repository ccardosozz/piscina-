/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 10:05:56 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/01 10:05:24 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	rush(int x,int y)
{
	char coluna;
	char linha; 
	
	linha = 1;
	while (linha <= y)
	{
		coluna = 1;
		while (coluna <= x)
		{
			if ((linha == 1 && coluna == 1) || (linha == y && coluna == 1))
				ft_putchar('A');	
			else if ((linha == 1 &&  coluna == x) || (linha == y && coluna == x))
				ft_putchar('C');
			else if ((linha == 1 || linha == y || coluna == 1 || coluna == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			coluna++;
		} 
		ft_putchar('\n');
		linha++;
	}
}
