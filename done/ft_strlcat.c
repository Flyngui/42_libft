/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:41:07 by guiferre          #+#    #+#             */
/*   Updated: 2024/10/30 15:47:47 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sum;
	unsigned int	dsize;
	unsigned int	ssize;

	dsize = 0;
	ssize = 0;
	while (dest[dsize] != '\0')
		dsize++;
	while (src[ssize] != '\0')
		ssize++;
	sum = dsize + ssize;
	i = 0;
	while (dsize < size && src[i] != '\0')
	{
		dest[dsize] = src[i];
		dsize++;
		i++;
	}
	dest[dsize] = '\0';
	return (sum);
}
