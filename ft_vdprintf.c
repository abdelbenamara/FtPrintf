/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:02:55 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/02 01:26:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	int	nb;

	nb = 0;
	while (*format)
	{
		if (*format != '%')
			(ft_putchar_fd(*format, fd), ++nb);
		else
			nb += ft_vdconvert(fd, &format, &ap);
		++format;
	}
	return (nb);
}
