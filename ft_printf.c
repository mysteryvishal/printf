/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:07:04 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/17 15:13:48 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_type(const char type, va_list args, int *count)
{
	if (type == 'd' || type == 'i')
		pf_putid(va_arg(args, int), count);
	else if (type == 'c')
		pf_putc(va_arg(args, int), count);
	else if (type == 's')
		pf_puts(va_arg(args, char *), count);
	else if (type == 'u')
		pf_putu(va_arg(args, unsigned int), count);
	else if (type == 'x' || type == 'X')
		pf_puth(va_arg(args, unsigned long long), count, (type == 'X'));
	else if (type == 'p')
		pf_putp(va_arg(args, unsigned long long), count);
	else
		pf_putc('%', count);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (format == NULL)
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (handle_type(*format, args, &count))
				return (1);
		}
		else
			pf_putc(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
