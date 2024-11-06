/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:41:31 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/05 20:50:50 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (((char *) str1)[i] != ((char *) str2)[i])
			return (((char *) str1)[i] - ((char *) str2)[i]);
		i++;
	}
	return (0);
}
