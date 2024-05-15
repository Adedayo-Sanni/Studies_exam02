/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:47:03 by asanni            #+#    #+#             */
/*   Updated: 2024/05/14 20:23:42 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	res = (int *)malloc(sizeof(int) * len);
	i = 0;
	len = abs(end - start) + 1;
	while (i < len)
	{
		if (start > end)
		res[i] = start;
		start++;
		i++;
	}
	return (res);
}

int	main(void)
{
	int start = 5;
	int end = 10;

	int *arr = ft_range(start, end);
	int len = abs(end - start) + 1;

	for (int i = 0; i < len; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("\n");
	free(arr);
	return (0);
}
