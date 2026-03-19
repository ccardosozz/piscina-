/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksargv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:19:12 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/08 11:58:14 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_checks_argv(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] >= '1' && arg[i] <= '4')
			return (1);
		else
			return (0);
		i++;
	}	
	return (0);
}
