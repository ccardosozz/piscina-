/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_views.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 12:07:12 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/08 14:06:04 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_views_up(int base[4][4], int colum, int view)
{
	int	i;
	int	count;
	int	max_count;

	i = 0;
	count = 0;
	max_count = 0;

	while (i < 4)
	{
		if (base[i][colum] > max_count)
		{
			count ++;
			max_count = base[i][colum];
		}
		i++;
	}
	return (count == view);
}

int check_views_bottoms(int base[4][4], int colum, int view)
{

}