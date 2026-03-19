/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:25:50 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/19 11:23:18 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		ft_putstr(argv[1]);
// 	}
// 	else
// 		write(1, "COLOQUE VALORES VALIDOS", 23);
// }