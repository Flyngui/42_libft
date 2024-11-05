/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:29:03 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/04 18:49:41 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_calloc(int n, int size)
{
	int	i;
	int	*arr;

	i = 0;
	if ((n * size) > 2147483647)
		return (NULL);
	arr = malloc(size * n);
	if (arr == NULL)
		return (NULL);
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
