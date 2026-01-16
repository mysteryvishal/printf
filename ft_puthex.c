/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:21:13 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/16 15:51:07 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_puthex(unsigned int nbr, int *count)
{
	if (nbr >= 16)
	{
		pf_puthex(nbr / 16, count);
		pf_puthex(nbr % 16, count);
	}
	else
	{
		ft_putchar_fd(HEX[nbr], 1);
		*count += 1;
	}
}
