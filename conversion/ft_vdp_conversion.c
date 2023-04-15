/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdp_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:00:40 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/15 13:03:53 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"
#include "libftprintf_conversion.h"

int	ft_vdp_conversion(int fd, t_flags *flags, va_list *ap)
{
	int		nb;
	void	*p;
	char	*a;

	p = va_arg(*ap, void *);
	if (!p)
	{
		ft_putstr_fd("(nil)", fd);
		nb = 5;
	}
	else
	{
		a = ft_uiptrtoa_base((uintptr_t) p, "0123456789abcdef");
		ft_putstr_fd("0x", fd);
		nb = 0;
		while (a[nb])
		{
			ft_putchar_fd(a[nb], fd);
			++nb;
		}
		nb += 2;
		free(a);
	}
	free(flags);
	return (nb);
}
