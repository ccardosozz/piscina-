/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:51:38 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/13 15:52:58 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j--;
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[] = {4, 3, 2, 3, 6, 9};
// 	ft_rev_int_tab(tab, 6);
// 	int	i;

// 	i = 0;

// 	while (i < 6)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }