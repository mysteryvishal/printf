/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:01:20 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/04 15:46:11 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// putchar_fd:
// 	writes character c to the specified file descriptor

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
