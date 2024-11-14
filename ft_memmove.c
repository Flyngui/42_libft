/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:11:48 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/14 17:49:06 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (NULL);
	if (src < dest)
	{
		i = n - 1;
		while (i >= 0)
		{
			*((char *) dest + i) = *((char *) src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*((char *) dest + i) = *((char *) src + i);
			i++;
		}
	}
	return (dest);
}
