/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 13:57:42 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/17 19:14:09 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
	i++;
	}
	return ((void *)0);
}

// #include <stdio.h>
// int main(int argc,char **argv)
// {
// 	if (argc == 3)
// 		printf("%s", ft_strstr(argv[1], argv[2]));
// 	else
// 		printf("informe valores validos seu ANIMAl");
// 	return (0);
// }