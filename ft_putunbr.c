/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:32:27 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/16 16:43:00 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putunbr(unsigned int n, int *count)
{
	unsigned int	num;
	char			ch;

	num = (unsigned int)(n);
	if (num >= 10)
		pf_putunbr((num / 10), count);
	ch = (num % 10) + '0';
	pf_putchar(ch, count);
}
