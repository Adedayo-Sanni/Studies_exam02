/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1first_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:01:25 by asanni            #+#    #+#             */
/*   Updated: 2024/05/14 20:21:16 by asanni           ###   ########.fr       */
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
		while (argv[1][i] < 33 || argv[1][i] > 127)
			i++;
		while (argv[1][i] > 33 && argv[1][i] < 127)
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
