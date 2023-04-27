/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdd_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:05 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 06:24:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

static int	ft_process_flags(int fd, t_csfwp *specs, int d)
{
	int	nb;

	nb = 0;
	if (d >= 0 && specs->sign_flag)
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

int	ft_vdd_conversion(int fd, t_csfwp *specs, va_list *ap)
{
	int		d;
	char	*a;
	size_t	len;
	int		nb;

	d = va_arg(*ap, int);
	a = ft_itoa(d);
	len = ft_strlen(a);
	nb = ft_process_flags(fd, specs, d);
	nb += ft_adjust_left(fd, specs, len);
	ft_putstr_fd(a, fd);
	return (free(a), free(specs), nb + len);
}
