/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <guiferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:15:22 by guiferre          #+#    #+#             */
/*   Updated: 2024/11/20 18:55:52 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int nb)
{
	if (nb >= 0 && nb <= 127)
		return (1);
	else
		return (0);
}
