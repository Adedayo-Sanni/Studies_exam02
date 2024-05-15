/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_one.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:30:44 by asanni            #+#    #+#             */
/*   Updated: 2024/04/24 16:27:56 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 97 && argv[1][i] < 122
				|| argv[1][i] >= 65 && argv[1][i] < 90)
				ft_putchar(argv[1][i] + 1);
			else if (argv[1][i] == 122 || argv[1][i] == 90)
				ft_putchar(argv[1][i] - 25);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
}
