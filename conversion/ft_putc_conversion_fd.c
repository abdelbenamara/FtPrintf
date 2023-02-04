/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putc_conversion_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:35:57 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 21:15:33 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"

int	ft_putc_conversion_fd(const char *format, va_list ap, int fd)
{
	int		nb;
	char	c;

	(void)format;
	nb = 0;
	c = va_arg(ap, int);
	ft_putchar_fd(c, fd);
	++nb;
	return (nb);
}
