/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:51:28 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/07 15:55:58 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return (&s[i]);
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
