/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 19:55:03 by asanni            #+#    #+#             */
/*   Updated: 2024/04/03 20:28:24 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_char(char c)
{
	return (c >= 33 && c <= 126);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	is_space(int c)
{
	return (c == 32 || c == 9);
}

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int end;

	i = 0;
	start = 0;
	end = 0;
	if (argc == 2 && argv[1] != NULL)
	{
		// pulamos do argv[0] para o argv[1]
		argv++;
		// contando quantas letras a str tem para saber qual e o final da str
		i = ft_strlen(*argv) - 1;
		//pulando espacos do final da str
		while (is_space(argv[0][i]))
			i--;
		end = i;
		while (!is_space(argv[0][i]) && argv[0][i] != '\0')
			--i;
		start = i + 1;
		while (start <= end)
		{
			ft_putchar(argv[0][start]);
			start++;
		}
	}
	write(1, "\n", 1);
}
