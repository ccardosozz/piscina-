/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:55:03 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/08 16:26:56 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
	}
	while (argv[1][i])
	{		
		c = argv[1][i];
		write(1, &c, 1);
		i++;
	}

}
