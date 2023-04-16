/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdupperx_conversion.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:24 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 15:20:30 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"
#include "libftprintf_conversion.h"

static int	ft_process_flags(int fd, unsigned int x, t_cslpf *flags)
{
	int	nb;

	nb = 0;
	if (x > 0 && flags->alternate_form)
	{
		ft_putstr_fd("0X", fd);
		nb += 2;
	}
	return (nb);
}

int	ft_vdupperx_conversion(int fd, t_cslpf *flags, va_list *ap)
{
	int				nb;
	int				i;
	unsigned int	x;
	char			*a;

	x = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(x, "0123456789ABCDEF");
	nb = ft_process_flags(fd, x, flags);
	i = 0;
	while (a[i])
	{
		ft_putchar_fd(a[i], fd);
		++i;
	}
	free(a);
	free(flags);
	return (nb + i);
}
