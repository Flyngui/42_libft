/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:27:41 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/08 15:09:34 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lenght;

	if (!s1 || !s2)
		return (NULL);
	lenght = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, lenght + 1);
	ft_strlcat(str, s2, lenght + 1);
	return (str);
}
