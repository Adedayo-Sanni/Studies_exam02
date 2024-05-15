/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:20:05 by asanni            #+#    #+#             */
/*   Updated: 2024/05/08 20:00:12 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *s1, char *s2)
{
	static int	letter[128];
	int			i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (letter[s1[i]] == 0)
		{
			letter[s1[i]] = 1;
			ft_putchar(s1[i]);
		}
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (letter[s2[i]] == 0)
		{
			letter[s2[i]] = 1;
			ft_putchar(s2[i]);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
