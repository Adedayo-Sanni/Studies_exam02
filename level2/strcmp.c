/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 23:43:47 by asanni            #+#    #+#             */
/*   Updated: 2024/04/08 16:56:46 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = " reto";
	s2 = " rato";
	printf("original: %d\n", strcmp(s1, s2));
	printf("minha: %d\n", ft_strcmp(s1, s2));
}
