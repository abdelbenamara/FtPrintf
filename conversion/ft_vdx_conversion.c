/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdx_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:06 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 13:20:05 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"
#include "libftprintf_conversion.h"

static int	ft_process_flags(int fd, t_cslpf *flags, unsigned int x)
{
	int	nb;

	nb = 0;
	if (x > 0 && flags->alternate_form)
	{
		ft_putstr_fd("0x", fd);
		nb += 2;
	}
	return (nb);
}

int	ft_vdx_conversion(int fd, t_cslpf *flags, va_list *ap)
{
	int				nb;
	int				i;
	unsigned int	x;
	char			*a;

	x = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(x, "0123456789abcdef");
	nb = ft_process_flags(fd, flags, x);
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
