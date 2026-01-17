/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:59:26 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/17 15:06:23 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pf_putc(int c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	pf_puts(char *s, int *count)
{
	if (!s)
		return (pf_puts("(null)", count));
	while (*s)
	{
		pf_putc(*s, count);
		s++;
	}
}
