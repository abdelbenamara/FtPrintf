/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vds_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:58:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 09:56:47 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vds_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	const char	*s;
	size_t		len;
	int			nb;
	ssize_t		i;

	s = va_arg(*ap, const char *);
	if (!s)
		return (ft_putstr_fd("(null)", fd), free(specs), 6);
	else
	{
		len = ft_strlen(s);
		nb = ft_adjust_right(fd, specs, ft_min_width(len, specs->precision));
		if (specs->precision < 0 || len <= ((size_t) specs->precision))
			ft_putstr_fd((char *) s, fd);
		else if (len > ((size_t) specs->precision))
		{
			len = specs->precision;
			i = -1;
			while (++i < specs->precision)
				ft_putchar_fd(s[i], fd);
		}
		nb += ft_adjust_left(fd, specs, len);
		return (free(specs), nb + len);
	}
}
