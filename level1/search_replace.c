/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:06:09 by asanni            #+#    #+#             */
/*   Updated: 2024/01/29 19:07:41 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (len_check(&argv[2][i]) > 1 || len_check(&argv[3][i]) > 1)
		{
			write(1, "\n", 1);
			_exit(1);
		}
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i]) == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			write(1, &(argv[1][i]), 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
