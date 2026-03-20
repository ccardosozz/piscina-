/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calexsan <calexsan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 04:05:11 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/17 18:57:27 by calexsan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
 int main()
 {
	char	s1[13] = "amo o jordan";
 char	s2[13] = "amD o jordan";

printf("minha função: %d\n", ft_strcmp(s1, s2));
	printf("minha função: %d ", strcmp(s1, s2));

}