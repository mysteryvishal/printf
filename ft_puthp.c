/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:21:13 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/17 13:20:26 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_puth(unsigned long long nbr, int *count, int upper)
{
	if (nbr >= 16)
	{
		pf_puth(nbr / 16, count, upper);
		pf_puth(nbr % 16, count, upper);
	}
	else
	{
		if (upper)
			pf_putc(ft_toupper(HEX[nbr]), count);
		else
			pf_putc(HEX[nbr], count);
	}
}

void	pf_putp(unsigned long long p, int *count)
{
	if (!p)
		pf_puts("(nil)", count);
	pf_puts("0x", count);
	pf_puth(p, count, 0);
}
