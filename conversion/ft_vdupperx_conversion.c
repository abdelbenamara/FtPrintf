/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdupperx_conversion.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:24 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 09:15:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

static int	ft_process_flags(int fd, t_cfwps *specs, unsigned int x)
{
	int	nb;

	nb = 0;
	if (x > 0 && specs->alternate_form_flag)
	{
		ft_putstr_fd("0X", fd);
		nb += 2;
	}
	return (nb);
}

static int
	ft_process_precision(int fd, t_cfwps *specs, unsigned int x, size_t len)
{
	int	nb;
	int	min;

	if (specs->precision < 0 || (!x && !specs->precision))
		return (0);
	nb = 0;
	min = 0;
	if (((size_t) specs->precision) > len)
		min = specs->precision - len;
	while (nb < min)
	{
		ft_putchar_fd('0', fd);
		++nb;
	}
	return (nb);
}

int	ft_vdupperx_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	unsigned int	x;
	char			*a;
	size_t			len;
	int				nb;
	size_t			width;

	x = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(x, "0123456789ABCDEF");
	len = ft_strlen(a);
	nb = ft_process_flags(fd, specs, x);
	if (!x && !specs->precision)
		--len;
	width = nb + ft_max_width(len, specs->precision);
	nb += ft_adjust_right(fd, specs, width);
	nb += ft_process_precision(fd, specs, x, len);
	if (x > 0 || specs->precision)
		ft_putstr_fd(a, fd);
	nb += ft_adjust_left(fd, specs, width);
	return (free(a), free(specs), nb + len);
}
