/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:44:41 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/07 17:56:45 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_fd(char c)
{
	write (fd, &c, 1);
}

void	ft_putnbr_doesit(int temp)
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
		ft_putchar_fd (arr[k] + '0');
		k--;
	}
}

void	ft_putnbr_fd(int nb)
{
	int	tempnb;

	tempnb = nb;
	if (tempnb == 0)
	{
		ft_putchar_fd ('0');
	}
	if (tempnb < 0)
	{
		write (fd, "-", 1);
	}
	ft_putnbr_doesit(tempnb);
}
