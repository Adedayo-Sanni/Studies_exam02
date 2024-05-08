/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:39:35 by asanni            #+#    #+#             */
/*   Updated: 2024/05/08 19:41:57 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' && (argv[1][i + 1] > 33 && argv[1][i] < 126))
				j = i + 1;
			i++;
		}
		while ((argv[1][j] > 33 && argv[1][j] < 126) && argv[1][j] != '\0')
		{
			ft_putchar(argv[1][j]);
			j++;
		}
		ft_putchar('\n');
	}
}
