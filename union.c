/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:20:05 by asanni            #+#    #+#             */
/*   Updated: 2024/05/01 18:02:56 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_exists(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int check_doubles(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if 
	}
}

void	check_both_str(char *str1, char *str2, char c)
{
	if (char_exists(str1, c) || char_exists(str2, c))
		write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		len1;
	int		len2;
	int		i;
	int		j;

	len1 = str_len(argv[1]);
	len2 = str_len(argv[2]);
	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (i < len1)
		{
			check_both_str(argv[1], argv[2], argv[1][i]);
			i++;
		}
		while (j < len2)
		{
			check_both_str(argv[1], argv[2], argv[2][j]);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
