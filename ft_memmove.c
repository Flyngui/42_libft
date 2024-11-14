/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:11:48 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/14 20:09:24 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*sstr;
	unsigned char		*dstr;

	if (!src && !dest)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	sstr = (const unsigned char *)src;
	dstr = (unsigned char *)dest;
	while (n--)
		dstr[n] = sstr[n];
	return (dest);
}
