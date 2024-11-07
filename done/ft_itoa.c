/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:22:48 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/07 19:26:21 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*itoa_logic(int n, int lenght, char *arr)
{
	int		temp;
	int		i;

	temp = n;
	arr[lenght] = '\0';
	while (--lenght >= 0)
	{
		i = temp % 10;
		if (i < 0)
			i *= -1;
		arr[lenght] = i + '0';
		temp = temp / 10;
	}
	if (n < 0)
		arr[0] = '-';
	return (arr);
}

char	*ft_itoa(int n)
{
	int		lenght;
	int		temp;
	char	*arr;

	temp = n;
	lenght = 0;
	while (temp != 0)
	{
		temp /= 10;
		lenght++;
	}
	if (n < 0)
		lenght += 1;
	arr = malloc(sizeof(char) * lenght + 1);
	if (!arr)
		return (NULL);
	itoa_logic(n, lenght, arr);
	return (arr);
}
