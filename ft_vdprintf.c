/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:02:55 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/02 01:00:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	int	nb;

	(void)ap;
	nb = 0;
	while (*format)
	{
		ft_putchar_fd(*format, fd);
		++format;
		++nb;
	}
	return (nb);
}
