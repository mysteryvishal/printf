/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:27:21 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/16 16:36:00 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putnbr(int n, int *count)
{
	unsigned int	num;
	char			ch;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		pf_putchar('-', count);
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)(n);
	if (num >= 10)
		pf_putnbr((num / 10), count);
	ch = (num % 10) + '0';
	pf_putchar(ch, count);
}
