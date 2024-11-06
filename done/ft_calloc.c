/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:29:03 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/06 13:22:48 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_calloc(int n, size_t size)
{
	int	*arr;

	if ((n * size) > 2147483647)
		return (NULL);
	arr = malloc(size * n);
	if (arr == NULL)
		return (NULL);
	while (size > 0)
	{
		*arr = 0;
		size--;
	}
	return (arr);
}
