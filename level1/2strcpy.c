/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2strcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:26:19 by asanni            #+#    #+#             */
/*   Updated: 2024/05/14 21:04:02 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main()
{
	char src[] = "Hello, World!";
	char dest[50];
	char *copiedString = ft_strcpy(dest, src);
	printf("Source String: %s\n", src);
	printf("Destination String After Copying: %s\n", copiedString);
	return (0);
}
