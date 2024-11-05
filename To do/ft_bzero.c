/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:54:39 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/04 22:30:00 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		((char *) s)[i] = '\0';
		i++;
	}
}

int	main(void)
{
	int i = 5;
	char *arr = "Hello World";

	ft_bzero(arr, i);
	printf("%s", arr);
}
