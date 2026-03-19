/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 17:25:25 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/16 15:57:51 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main()
// {
// 	char	str[16]="\n";
// 	printf("%d ",ft_str_is_printable(str));
// }
