/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vduint_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:49 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 14:00:50 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

static int	ft_apply_flags(int fd, t_cfwps *specs, unsigned int u)
{
	if (u > 0 && specs->alternate_form_flag)
	{
		if (specs->specifier == 'x')
			return (ft_putstr_fd("0x", fd), 2);
		else if (specs->specifier == 'X')
			return (ft_putstr_fd("0X", fd), 2);
	}
	return (0);
}

static int	ft_precise(int fd, t_cfwps *specs, unsigned int u, size_t len)
{
	int	nb;
	int	min;

	if (specs->precision < 0 || (!u && !specs->precision))
		return (0);
	nb = 0;
	min = 0;
	if (((size_t) specs->precision) > len)
		min = specs->precision - len;
	while (nb < min)
		(ft_putchar_fd('0', fd), ++nb);
	return (nb);
}

int	ft_vduint_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	unsigned int	u;
	char			*a;
	size_t			len;
	int				nb;
	size_t			width;

	u = va_arg(*ap, unsigned int);
	if (specs->specifier == 'x')
		a = ft_uitoa_base(u, "0123456789abcdef");
	else if (specs->specifier == 'X')
		a = ft_uitoa_base(u, "0123456789ABCDEF");
	else
		a = ft_uitoa_base(u, "0123456789");
	if (!a)
		return (free(specs), 0);
	len = ft_strlen(a);
	nb = ft_apply_flags(fd, specs, u);
	if (!u && !specs->precision)
		len = 0;
	width = nb + ft_max_width(len, specs->precision);
	nb += ft_adjust_width(0, fd, specs, width) + ft_precise(fd, specs, u, len);
	if (u > 0 || specs->precision)
		ft_putstr_fd(a, fd);
	nb += ft_adjust_width(1, fd, specs, width);
	return (free(a), free(specs), nb + len);
}
