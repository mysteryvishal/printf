/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:21:13 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/17 19:26:47 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_puth(unsigned long num, int *count, int upper)
{
	if (num >= 16)
		pf_puth(num / 16, count, upper);
	if (upper == 1)
		pf_putc(ft_toupper(HEX[num % 16]), count);
	else
		pf_putc(HEX[num % 16], count);
}

void	pf_putp(unsigned long p, int *count)
{
	if (!p)
		return (pf_puts("(nil)", count));
	pf_puts("0x", count);
	pf_puth(p, count, 0);
}
