/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:02:55 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 23:02:09 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"
#include "libftprintf.h"

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	int	nb;
	int	s_len;

	nb = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, fd);
			++nb;
		}
		else
		{
			s_len = ft_specification_len(format + 1);
			if (!s_len)
				return (-1);
			nb += ft_putconversion_fd(format[s_len], format, ap, fd);
			format += s_len;
		}
		++format;
	}
	return (nb);
}
