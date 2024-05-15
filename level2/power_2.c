/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:14:46 by asanni            #+#    #+#             */
/*   Updated: 2024/05/08 20:34:39 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return (n);
	return (0);
}

int	main(void)
{
	for (int i = 0; i < 20; ++i)
		printf("Valor passado para funcao é: %d\nÉ uma potencia de dois?: %s\n", i, ((is_power_of_2(i) ? "Sim" : "Nao")));
	return (0);
}
