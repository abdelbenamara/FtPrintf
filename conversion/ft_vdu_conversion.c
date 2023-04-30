/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdu_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:49 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 00:25:27 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

static int
	ft_process_precision(int fd, t_cfwps *specs, unsigned int u, size_t len)
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
	{
		ft_putchar_fd('0', fd);
		++nb;
	}
	return (nb);
}

int	ft_vdu_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	unsigned int	u;
	char			*a;
	size_t			len;
	int				nb;

	u = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(u, "0123456789");
	len = ft_strlen(a);
	if (!u && !specs->precision)
		--len;
	nb = ft_adjust_right(fd, specs, ft_max_width(len, specs->precision));
	nb += ft_process_precision(fd, specs, u, len);
	if (u > 0 || specs->precision)
		ft_putstr_fd(a, fd);
	nb += ft_adjust_left(fd, specs, ft_max_width(len, specs->precision));
	return (free(a), free(specs), nb + len);
}
