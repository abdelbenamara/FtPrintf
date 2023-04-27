/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdx_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:06 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 07:31:42 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"
#include "libftprintf_conversion.h"

static int	ft_process_flags(int fd, t_csfwp *specs, unsigned int x)
{
	int	nb;

	nb = 0;
	if (x > 0 && specs->alternate_form_flag)
	{
		ft_putstr_fd("0x", fd);
		nb += 2;
	}
	return (nb);
}

int	ft_vdx_conversion(int fd, t_csfwp *specs, va_list *ap)
{
	unsigned int	x;
	char			*a;
	size_t			len;
	int				nb;

	x = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(x, "0123456789abcdef");
	len = ft_strlen(a);
	nb = ft_process_flags(fd, specs, x);
	nb += ft_adjust_right(fd, specs, len);
	ft_putstr_fd(a, fd);
	nb += ft_adjust_left(fd, specs, len);
	return (free(a), free(specs), nb + len);
}
