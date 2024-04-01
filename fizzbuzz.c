/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:29:24 by asanni            #+#    #+#             */
/*   Updated: 2024/02/02 19:04:34 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	write_num(int num)
{
	if (num <= 9)
		putchar(num + 48);
	else
	{
		write_num(num / 10);
		write_num (num % 10);
	}
	return (num);
}

int	main(void)
{
	int			i;
	static char	*mult3 = "fizz";
	static char	*mult5 = "buzz";

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			write_num(i);
		putchar('\n');
		i++;
	}
}
