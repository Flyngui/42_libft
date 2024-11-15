/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:45:04 by guiferre          #+#    #+#             */
/*   Updated: 2024/10/29 18:54:20 by guiferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int nb)
{
	if ((nb >= 65 && nb <= 90) || (nb >= 97 && nb <= 122))
		return (1);
	if (nb >= 48 && nb <= 57)
		return (1);
	else
		return (0);
}
