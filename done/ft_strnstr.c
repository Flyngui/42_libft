/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:54:56 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/07 01:42:38 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strnstr(char *str, char *find, size_t n)
{
	int	i;
	int	j;

	if (find[0] == '\0')
		return (str);
	i = 0;
	while (i <= (int) n)
	{
		j = 0;
		while (str[i + j] == find[j])
		{
			if (i + j >= (int) n)
				return (NULL);
			if (find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
