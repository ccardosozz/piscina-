/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:55:34 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/16 15:58:09 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	dest[17] = "valar morghulis";

// 	char src[11]="ola samuel";

// 	printf("%s\n", ft_strcpy(dest, src));
// 	printf("%s\n ", strcpy(dest, src));
// }