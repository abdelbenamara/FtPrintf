/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:02:55 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/07 01:23:04 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "specification/libftprintf_specification.h"
#include "conversion/libftprintf_conversion.h"
#include "libftprintf.h"

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	int	p_len;
	int	s_len;
	int	c_len;

	p_len = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, fd);
			++p_len;
		}
		else
		{
			s_len = ft_specification_len(format);
			c_len = ft_put_conversion_fd(s_len, format, ap, fd);
			if (c_len < 0)
				return (-1);
			p_len += c_len;
			format += s_len;
		}
		++format;
	}
	return (p_len);
}
