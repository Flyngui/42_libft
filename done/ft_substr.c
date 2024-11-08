/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:26:11 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/08 03:08:51 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			j;

	if (!s)
		return (NULL);
	i = start;
	j = len;
	if (ft_strlen(s) < start)
		j = 0;
	sub = malloc(sizeof(char) * (j + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + i, j + 1);
	return (sub);
}
