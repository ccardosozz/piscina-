/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:24:35 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/11 19:25:23 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 6;
// 	printf("%d\n", b);
// 	printf("%d\n", a);
// 	ft_swap(&a, &b);

// 	printf("%d\n", b);
// 	printf("%d\n", a);

// }