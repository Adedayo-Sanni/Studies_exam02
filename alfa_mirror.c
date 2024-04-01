/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alfa_mirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:09:22 by asanni            #+#    #+#             */
/*   Updated: 2024/02/02 17:27:40 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	static int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				if (argv[1][i] >= 65 || argv[1][i] <= 77)
					argv[1][i] += 2 *(77 - argv[1][i]) + 1;
				else if (argv[1][i] >= 77 && argv[1][i] <= 90)
					argv[1][i] -= 2 *(argv[1][i] - 78) + 1;
			}
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				if (argv[1][i] >= 97 || argv[1][i] <= 109)
					argv[1][i] += 2 *(109 - argv[1][i]) + 1;
				else if (argv[1][i] >= 110 || argv[1][i] <= 122)
					argv[1][i] -= 2 *(argv[1][i] - 110) + 1;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
