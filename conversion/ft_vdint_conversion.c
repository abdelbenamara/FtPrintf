/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdint_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:05 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 14:11:34 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

static int	ft_adjust_uchar(int fd, t_cfwps *specs, int d)
{
	int	nb;

	nb = ft_adjust_width(0, fd, specs, 1);
	ft_putchar_fd((unsigned char) d, fd);
	nb += ft_adjust_width(1, fd, specs, 1);
	return (nb);
}

static int	ft_apply_flags(int fd, t_cfwps *specs, int d)
{
	if (d < 0 && specs->zero_flag)
		ft_putchar_fd('-', fd);
	else if (d >= 0)
	{
		if (specs->sign_flag)
			return (ft_putchar_fd('+', fd), 1);
		else if (specs->blank_flag)
			return (ft_putchar_fd(' ', fd), 1);
	}
	return (0);
}

static int	ft_precise(int fd, t_cfwps *specs, int d, size_t len)
{
	int	nb;
	int	min;

	if (d < 0 && !specs->zero_flag)
		ft_putchar_fd('-', fd);
	else if (specs->precision < 0 || (!d && !specs->precision))
		return (0);
	nb = 0;
	min = 0;
	if (d < 0 && ((size_t) specs->precision) > len - 1)
		min = specs->precision - len + 1;
	else if (d >= 0 && ((size_t) specs->precision) > len)
		min = specs->precision - len;
	while (nb < min)
		(ft_putchar_fd('0', fd), ++nb);
	return (nb);
}

int	ft_vdint_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	int		d;
	char	*a;
	size_t	len;
	int		nb;
	size_t	width;

	d = va_arg(*ap, int);
	if (specs->specifier == 'c')
		return (nb = ft_adjust_uchar(fd, specs, d), free(specs), nb + 1);
	a = ft_itoa(d);
	if (!a)
		return (free(specs), 0);
	len = ft_strlen(a);
	nb = ft_apply_flags(fd, specs, d);
	if (!d && !specs->precision)
		len = 0;
	width = nb + ft_max_width(len, specs->precision);
	nb += ft_adjust_width(0, fd, specs, width) + ft_precise(fd, specs, d, len);
	if (d < 0)
		ft_putstr_fd(a + 1, fd);
	else if (d > 0 || specs->precision)
		ft_putstr_fd(a, fd);
	nb += ft_adjust_width(1, fd, specs, width);
	return (free(a), free(specs), nb + len);
}
