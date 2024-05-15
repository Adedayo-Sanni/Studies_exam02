/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:10:22 by asanni            #+#    #+#             */
/*   Updated: 2024/04/23 12:15:22 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str >= 9 && *str <= 13)
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

int	main(void)
{
	char	*c;

	c = "a4";
	printf("original: %d\n", atoi(c));
	printf("minha: %d\n", ft_atoi(c));
}
//The atoi() function converts the initial portion of the string pointed to 
//by nptr to int.The behavior is the same as atoi() does not detect errors.
