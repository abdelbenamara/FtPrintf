/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdptr_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:00:40 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/03 02:21:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_vdptr_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	uintptr_t	p;
	char		*a;
	size_t		len;
	int			nb;

	p = (uintptr_t) va_arg(*ap, void *);
	if (!p)
		a = ft_strdup("(nil)");
	else
		a = ft_uiptrtoa_base(p, "0123456789abcdef");
	if (!a)
		return (free(specs), 0);
	len = 2 - 2 * (!p) + ft_strlen(a);
	nb = ft_adjust_width(0, fd, specs, len);
	if (p)
		ft_putstr_fd("0x", fd);
	ft_putstr_fd(a, fd);
	nb += ft_adjust_width(1, fd, specs, len);
	return (free(a), free(specs), nb + len);
}
