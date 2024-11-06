/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:49:28 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/06 13:39:17 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*end;
	char	*start;

	end = (char *)dest;
	start = (char *)src;
	while (n > 0)
	{
		*end = *start;
		end++;
		start++;
		n--;
	}
	return ((void *)end);
}
