/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:41:07 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/08 03:21:24 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	sum;
	unsigned int	dsize;
	unsigned int	ssize;

	dsize = ft_strlen(dest);
	ssize = ft_strlen(src);
	if (size <= dsize)
		return (size + ssize);
	sum = dsize + ssize;
	i = 0;
	while (dsize + 1 < size && src[i] != '\0')
	{
		dest[dsize] = src[i];
		dsize++;
		i++;
	}
	dest[dsize] = '\0';
	return (sum);
}
