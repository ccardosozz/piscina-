/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 06:38:07 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/03 10:43:39 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char r)
{
	write(1, &r, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
		{
			b = a + 1;
			while (b <= '8')
			{	
				c = b + 1;			
				while (c <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					if (a=='7' && b == '8' && c == '9')
						ft_putchar('\n');
					else 
						write(1, ", ", 2);				
					c++;
				}
				b++;
			}
			a++;
		}
}				

int main(void)
{
	ft_print_comb();
	return (0);
}
