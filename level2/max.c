/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:47:01 by asanni            #+#    #+#             */
/*   Updated: 2024/04/29 17:19:41 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	res;

	i = 0;
	res = tab[i];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}

int	main(void)
{
	int	numbers[] = {1, 25, 5, 4, 4};
	unsigned int len = sizeof(numbers) / sizeof(numbers[0]);
	int maxValue = max(numbers, len);
	printf("Max: %d\n", maxValue);
	return (0);
}
