/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ControladorDeEntrada.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 22:06:01 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/08 01:38:25 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_contr_entrada(char *str);
ft_error(void);

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

int	ft_contr_entrada(char *str)
{
	int	*cedula;
	int	i;

	cedula = (int *)malloc(16 * sizeof(int));
	if (!cedula)
		return (0);
	i = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '4')
		{
			if (i >= 16)
				return (0);
			cedula [i++] = *str - '0';
		}
		else if (*str != ' ')
			return (0);
		str++;
	}
	if (i != 16)
		return (0);
	return (cedula);
}

