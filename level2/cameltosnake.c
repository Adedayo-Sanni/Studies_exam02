/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cameltosnake.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:57:04 by asanni            #+#    #+#             */
/*   Updated: 2024/04/01 19:54:13 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] == 95) &&
			(argv[1][i + 1] >= 97 || argv[1][i + 1] <= 122))
			{
				i++;
				argv[1][i] -= 32;
			}
			putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
