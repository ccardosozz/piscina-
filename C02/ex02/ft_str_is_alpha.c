/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:52:55 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/16 15:48:28 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'A' && str[index] <= 'Z')
				|| (str[index] >= 'a' && str[index] <= 'z')))
			return (0);
		index++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	char	str[4] = "";

// 	printf("%d\n", ft_str_is_alpha(str));
// }