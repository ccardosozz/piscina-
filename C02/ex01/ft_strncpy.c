/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 04:41:42 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/16 15:46:16 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {	
// 	int	n;
// 	char	dest[8];
// 	char	src[8] = "dbarros";

// 	n = 5;
// 	printf("%s\n", strncpy(dest, src, n));
// 	printf("%s\n", ft_strncpy(dest, src, n));
// }