/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdx_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:06 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/15 13:04:17 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"
#include "libftprintf_conversion.h"

int	ft_vdx_conversion(int fd, t_flags *flags, va_list *ap)
{
	int				nb;
	unsigned int	x;
	char			*a;

	x = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(x, "0123456789abcdef");
	nb = 0;
	while (a[nb])
	{
		ft_putchar_fd(a[nb], fd);
		++nb;
	}
	free(a);
	free(flags);
	return (nb);
}
