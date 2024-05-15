/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:38:33 by asanni            #+#    #+#             */
/*   Updated: 2024/01/27 16:21:55 by asanni           ###   ########.fr       */
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
	int	j;

	if (argc == 2)
	{
		i = 0;
		j = 0;
		while (argv[1][i] != '\0')
		{
			j = (argv[1][i]) - 'a';
			while (j >= 0)
			{
				put_char(argv[1][i]);
				j--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
