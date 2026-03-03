/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 10:58:09 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/03 18:47:40 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	putchar(char b)
//{
//	write(1, &c, 1);
//}

void	ft_print_comb2(void)
{
	char	n;
	char	n2;

	n = 0;
	while (n <= 98)
	{
		n2 = n + 1;
		while (n2 <= 99)
		{
			write(1, &(char){n / 10 + '0'}, 1);
			write(1, &(char){n % 10 + '0'}, 1);
			write(1, " ", 1);
			write(1, &(char){n2 / 10 + 48}, 1);
			write(1, &(char){n2 % 10 + 48}, 1);
			if (!(n == 98 && n2 == 99))
				write(1, ", ", 2);
			n2++;
		}
	n++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}