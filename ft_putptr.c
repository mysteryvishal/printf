/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:59:49 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/16 20:28:52 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	pf_putptr(unsigned long long p, int *count)
// {
// 	if (!p)
// 	{
// 		pf_putstr("(null)", count);
// 		return;
// 	}
// 	pf_putstr("0x", count);
// 	pf_puthex(p, count);
// }

void	pf_putptr(va_list args, int *count)
{
	unsigned long long p;
	p = (unsigned long long) va_arg(args, void *);
	if (!p)
		pf_putstr("(nill)", count);
	p = (unsigned long long)(p);
	pf_putstr("0x", count);
	pf_puthex(p, count);
}

