/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:11:48 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/06 16:07:04 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	int		i;

	if (src < dest)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*((char *) dest + i) = *((char *) src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*((char *) dest + i) = *((char *) src + i);
			i++;
		}
	}
	return (dest);
}
