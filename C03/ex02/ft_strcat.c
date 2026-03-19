/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 19:35:47 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/17 19:08:54 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char	*src = "drogon";
// 	char	dest[11] = "valar ";
// 	//printf("%s\n", strcat(dest, src));
// 	printf("%s", ft_strcat(dest, src));
// }