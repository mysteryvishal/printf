/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:07:04 by vmistry           #+#    #+#             */
/*   Updated: 2026/01/19 17:05:56 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_type(const char type, va_list args, int *count)
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
		pf_puth(va_arg(args, unsigned int), count, (type == 'X'));
	else if (type == 'p')
		pf_putp(va_arg(args, unsigned long), count);
	else
		pf_putc('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			handle_type(*format, args, &count);
			format++;
		}
		else
		{
			pf_putc(*format, &count);
			format++;
		}
	}
	va_end(args);
	return (count);
}
