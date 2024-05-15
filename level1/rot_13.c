/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:16:01 by asanni            #+#    #+#             */
/*   Updated: 2024/01/27 17:45:23 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
		while (argv [1][i] != '\0')
		{
			if (argv [1][i] >= 78 && argv [1][i] <= 90)
				put_char((argv [1][i]) - 13);
			else if (argv [1][i] >= 110 && argv [1][i] <= 122)
				put_char((argv [1][i]) - 13);
			else
				put_char((argv [1][i]) + 13);
			i++;
		}
		put_char('\n');
	}
}
