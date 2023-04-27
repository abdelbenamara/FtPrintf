/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdp_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:00:40 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 07:30:16 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"
#include "libftprintf_conversion.h"

int	ft_vdp_conversion(int fd, t_csfwp *specs, va_list *ap)
{
	uintptr_t	p;
	char		*a;
	size_t		len;
	int			nb;

	p = (uintptr_t) va_arg(*ap, void *);
	if (!p)
		return (ft_putstr_fd("(nil)", fd), free(specs), 5);
	else
	{
		a = ft_uiptrtoa_base(p, "0123456789abcdef");
		len = 2 + ft_strlen(a);
		nb = ft_adjust_right(fd, specs, len);
		ft_putstr_fd("0x", fd);
		ft_putstr_fd(a, fd);
		nb += ft_adjust_left(fd, specs, len);
		return (free(a), free(specs), nb + len);
	}
}
