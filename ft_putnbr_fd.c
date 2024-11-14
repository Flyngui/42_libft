/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:44:41 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/14 18:10:30 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

static void	putnbr_logic(int temp, int fd)
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
		return ;
	}
	if (tempnb < 0)
	{
		ft_putchar_fd('-', fd);
	}
	putnbr_logic(tempnb, fd);
}
