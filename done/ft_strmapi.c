/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:26:55 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/07 19:57:59 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		lenght;
	char	*str;

	if (!s)
		return (NULL);
	lenght = 0;
	while (s[lenght] != '\0')
		lenght++;
	str = malloc(sizeof(char) * lenght + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
