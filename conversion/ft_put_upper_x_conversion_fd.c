/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_upper_x_conversion_fd.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:24 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 18:45:59 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/libftprintf_utils.h"
#include "conversion/libftprintf_conversion.h"

int	ft_put_upper_x_conversion_fd(const char *format, va_list *ap, int fd)
{
	int				nb;
	unsigned int	x;
	char			*a;

	(void)format;
	x = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(x, "0123456789ABCDEF");
	nb = 0;
	while (a[nb])
	{
		ft_putchar_fd(a[nb], fd);
		++nb;
	}
	free(a);
	return (nb);
}
