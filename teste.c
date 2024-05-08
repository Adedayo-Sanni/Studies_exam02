/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:45:52 by asanni            #+#    #+#             */
/*   Updated: 2024/05/08 19:42:18 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "dayo o";
// 	s2 = "dayo";
// 	printf("original: %d\n", strcmp(s1, s2));
// 	printf("minha: %d\n", ft_strcmp(s1, s2));
// }
void	putchar(char c)
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
			j = (argv[1][i] - 'a');
			while (j >= 0)
			{
				putchar(argv[1][i]);
				j--;
			}
			i++;
		}
	}
	putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' && (argv[1][i + 1] > 33 && argv[1][i] < 126))
				j = i + 1;
			i++;
		}
		while ((argv[1][j] > 33 && argv[1][j] < 126) && argv[1][j] != '\0')
		{
			ft_putchar(argv[1][j]);
			j++;
		}
		ft_putchar('\n');
	}
}
