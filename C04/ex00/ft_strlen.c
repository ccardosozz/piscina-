/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:58:22 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/19 11:28:20 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// #include <unistd.h>
// int main(int argc, char **argv)
// {
// 	int	nb;

// 	if (argc == 2)
// 	{
// 		nb = ft_strlen(argv[1]);
// 		nb = nb + '0';
// 		write (1, &nb, 1);
// 	}
// 	else
// 		write(1, "COLOQUE VALORES VALIDOS", 23)

// }