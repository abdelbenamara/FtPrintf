/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdptr_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:00:40 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/01 17:06:01 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vdptr_conversion(int fd, t_cfwps *specs, va_list ap)
{
	uintptr_t	p;
	char		*a;
	size_t		len;
	int			nb;

	p = (uintptr_t) va_arg(ap, void *);
	if (!p)
		return (ft_putstr_fd("(nil)", fd), free(specs), 5);
	else
	{
		a = ft_uiptrtoa_base(p, "0123456789abcdef");
		if (!a)
			return (free(specs), 0);
		len = 2 + ft_strlen(a);
		nb = ft_adjust_width(0, fd, specs, len);
		ft_putstr_fd("0x", fd);
		ft_putstr_fd(a, fd);
		nb += ft_adjust_width(1, fd, specs, len);
		return (free(a), free(specs), nb + len);
	}
}
