/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:02:27 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/07 21:54:37 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int nb)
{
	if (nb >= 32 && nb <= 126)
		return (1);
	else
		return (0);
}
