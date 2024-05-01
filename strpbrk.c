/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 23:56:41 by asanni            #+#    #+#             */
/*   Updated: 2024/04/06 12:13:39 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
// s1 = o que vou procurar
// s2 = onde vou procurar

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ade";
	s2 = "ddeayo";
	printf("original: %s\n", strpbrk(s1, s2));
	printf("minha: %s\n", ft_strpbrk(s1, s2));
}
