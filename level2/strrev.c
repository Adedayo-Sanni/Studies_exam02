/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:47:23 by asanni            #+#    #+#             */
/*   Updated: 2024/05/14 20:50:11 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	char temp[len + 1];
	temp[len] = '\0';
	while (len)
	{
		temp[i] = str[len - 1];
		i++;
		len--;
	}
	str = temp;
	return (str);
}

int	main(void)
{
	char	*str;

	str = "Vinicius";
	printf("Original String: %s\n", str);
	printf("Reversed String: %s\n", ft_strrev(str));
	return (0);
}
