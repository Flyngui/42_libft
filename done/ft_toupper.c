/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:25:55 by guiferre          #+#    #+#             */
/*   Updated: 2024/10/29 19:26:41 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int nb)
{
	if (nb >= 97 && nb <= 122)
		return (nb - 32);
	else
		return (nb);
}
