/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:20:39 by asanni            #+#    #+#             */
/*   Updated: 2024/04/06 12:30:41 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	if (!s || !reject)
		return (0);
	while (s[i] && reject[i])
	{
		if (s[i] != reject[i])
			diff++;
		i++;
	}
	return (diff);
}

int	main(void)
{
	char	*s1 = "diana";
	char	*s2 = "d";

	printf("original: %lu\n", strcspn(s1, s2));
	printf("minha: %zu\n", ft_strcspn(s1, s2));
}
