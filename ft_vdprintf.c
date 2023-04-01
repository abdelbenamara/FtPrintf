/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:02:55 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 18:43:01 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "specification/libftprintf_specification.h"
#include "conversion/libftprintf_conversion.h"
#include "libftprintf.h"

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	int	print_len;
	int	spec_len;

	print_len = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, fd);
			++print_len;
		}
		else
		{
			spec_len = ft_specification_len(format);
			print_len += ft_put_conversion_fd(spec_len, format, &ap, fd);
			format += spec_len;
		}
		++format;
	}
	return (print_len);
}
