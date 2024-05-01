/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:26:47 by asanni            #+#    #+#             */
/*   Updated: 2024/05/01 17:15:18 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	char_exists(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;
	int		len1;
	int		i;

	str1 = argv[1];
	str2 = argv[2];
	len1 = len(str1);
	i = 0;
	if (argc == 3)
	{
		while (i < len1)
		{
			if (char_exists(str2, str1[i]))
				write(1, &str1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
