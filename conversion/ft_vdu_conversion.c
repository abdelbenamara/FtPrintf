/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdu_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:49 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/15 13:04:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"
#include "libftprintf_conversion.h"

int	ft_vdu_conversion(int fd, t_flags *flags, va_list *ap)
{
	int				nb;
	unsigned int	u;
	char			*a;

	u = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(u, "0123456789");
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
