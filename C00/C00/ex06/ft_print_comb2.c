/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 10:58:09 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/05 05:07:44 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

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
			write(1, &(char){n2 / 10 + '0'}, 1);
			write(1, &(char){n2 % 10 + '0'}, 1);
			if (!(n == 98 && n2 == 99))
				write(1, ", ", 2);
			n2++;
		}
	n++;
	}
}
