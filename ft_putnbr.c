/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:03:52 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/30 05:17:25 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n)
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
		ft_putchar('-');
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)(n);
	if (num >= 10)
		ft_putnbr((num / 10));
	ch = (num % 10) + '0';
	ft_putchar(ch);
}
