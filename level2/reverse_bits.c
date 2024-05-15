/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:51:45 by asanni            #+#    #+#             */
/*   Updated: 2024/04/26 18:10:31 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	unsigned char	a;
	unsigned char	aux;
	int				aux_add;
	int				i;

	a = 99;
	aux = 0;
	i = 7;
	aux_add = 128;
	printf("\naux = %d aux_add = %d i = %d a_i = %d\n", aux, aux_add, i, a << i);
	while (i > 0)
	{
		aux += a << i & aux_add;
		aux_add = aux_add >> 1;
		i -= 2;
		printf("\naux = %d aux_add = %d i = %d a_i = %d\n", aux, aux_add, i, a << i);
	}
	printf("primeiro while:%d\n", aux);
	i = 7;
	aux_add = 1;
	while (i > 0)
	{
		aux += a >> i & aux_add;
		aux_add = aux_add << 1;
		i -= 2;
		printf("\naux = %d aux_add = %d i = %d a_i = %d\n", aux, aux_add, i, a << i);
	}
	printf("segundo while: %d\n", aux);
}
