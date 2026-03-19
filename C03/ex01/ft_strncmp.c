/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 04:32:18 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/17 19:00:38 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	s1[8] = "dracula";
// 	char	s2[8] = "dracLla";

// 	printf("%s, %s\n", s1, s2);
// 	printf("%d\n", strncmp(s1, s2, 4));
// 	printf("%d\n", ft_strncmp(s1, s2, 4));
// }
