/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:55:56 by asanni            #+#    #+#             */
/*   Updated: 2024/05/01 16:38:36 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	temp;
	int		start;
	int		len;

	len = -1;
	temp = 0;
	start = 0;
	while (str[len] != '\0')
		len++;
	while (start < len)
	{
			temp = str[start];
			str[start] = str[len];
			str[len] = temp;
			start++;
			len --;
	}
	return (str);
}

int	main(void)
{
	char	*str;

	str = "chata";
	printf("antes: %s\n", ft_strrev(str));
	printf("pointer: %p\n", ft_strrev(str));
	printf("depois: %s\n", ft_strrev(str));
	printf("pointer: %p\n", ft_strrev(str));
}
