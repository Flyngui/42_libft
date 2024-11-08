/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:44:41 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/08 14:48:43 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

static void	ft_putnbr_doesit(int temp, int fd)
{
	int	arr[10];
	int	i;
	int	j;
	int	k;

	i = 0;
	while (temp != 0)
	{
		j = temp % 10;
		if (j < 0)
		{
			j = j * -1;
		}
		arr[i] = j;
		i++;
		temp = temp / 10;
	}
	k = i - 1;
	while (k > -1)
	{
		ft_putchar_fd(arr[k] + '0', fd);
		k--;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	tempnb;

	tempnb = nb;
	if (tempnb == 0)
	{
		ft_putchar_fd('0', fd);
	}
	if (tempnb < 0)
	{
		ft_putchar_fd('-', fd);
	}
	ft_putnbr_doesit(tempnb, fd);
}
