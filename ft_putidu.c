/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putidu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:58:15 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/17 13:43:07 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putu(unsigned int num, int *count)
{
	char			ch;

	if (num >= 10)
		pf_putu((num / 10), count);
	ch = (num % 10) + '0';
	pf_putc(ch, count);
}

void	pf_putid(int n, int *count)
{
	unsigned int	num;

	if (n == -2147483648)
	{
		pf_puts("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		pf_putc('-', count);
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)(n);
	pf_putu(num, count);
}
