/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:48:41 by asanni            #+#    #+#             */
/*   Updated: 2024/01/27 18:03:42 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				put_char((argv[1][i]) + 32);
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				put_char((argv[1][i]) - 32);
			else
				put_char(argv[1][i]);
			i++;
		}
	}
	put_char('\n');
}
