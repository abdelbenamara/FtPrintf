/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:02:55 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/03 02:53:17 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	va_list	aq;
	int		nb;

	va_copy(aq, ap);
	nb = 0;
	while (*format)
	{
		if (*format != '%')
			(ft_putchar_fd(*format, fd), ++nb);
		else
			nb += ft_vdconvert(fd, &format, &aq);
		++format;
	}
	va_end(aq);
	return (nb);
}
