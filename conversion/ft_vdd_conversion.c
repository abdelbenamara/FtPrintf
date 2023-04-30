/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdd_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:05 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 09:21:23 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

static int	ft_process_flags(int fd, t_cfwps *specs, int d)
{
	int	nb;

	nb = 0;
	if (d < 0 && specs->zero_flag)
		ft_putchar_fd('-', fd);
	else if (d >= 0 && specs->sign_flag)
	{
		ft_putchar_fd('+', fd);
		++nb;
	}
	else if (d >= 0 && specs->blank_flag)
	{
		ft_putchar_fd(' ', fd);
		++nb;
	}
	return (nb);
}

static int	ft_process_precision(int fd, t_cfwps *specs, int d, size_t len)
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
	{
		ft_putchar_fd('0', fd);
		++nb;
	}
	return (nb);
}

int	ft_vdd_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	int		d;
	char	*a;
	size_t	len;
	int		nb;
	size_t	width;

	d = va_arg(*ap, int);
	a = ft_itoa(d);
	len = ft_strlen(a);
	nb = ft_process_flags(fd, specs, d);
	if (!d && !specs->precision)
		--len;
	width = nb + ft_max_width(len, specs->precision);
	nb += ft_adjust_right(fd, specs, width);
	nb += ft_process_precision(fd, specs, d, len);
	if (d < 0)
		ft_putstr_fd(a + 1, fd);
	else if (d > 0 || specs->precision)
		ft_putstr_fd(a, fd);
	nb += ft_adjust_left(fd, specs, width);
	return (free(a), free(specs), nb + len);
}
