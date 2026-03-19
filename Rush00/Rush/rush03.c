/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 10:05:56 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/02 19:37:42 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);

void	rush(int x,int y)
{
	char c;
	char l; 
	
	l = 1;
	if (x <= 0 || y <= 0)
		write(1,"Valores inválidos", 17);

	while (l<= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c== 1))
				ft_putchar('A');	
			else if ((l == 1 &&  c == x) || (l == y && c == x))
				ft_putchar('C');
			else if ((l == 1 || l == y || c == 1 || c== x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		} 
		ft_putchar('\n');
		l++;
	}
}
