/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_conversion_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:49 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 18:45:56 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/libftprintf_utils.h"
#include "conversion/libftprintf_conversion.h"

int	ft_put_u_conversion_fd(const char *format, va_list *ap, int fd)
{
	int				nb;
	unsigned int	u;
	char			*a;

	(void)format;
	u = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(u, "0123456789");
	nb = 0;
	while (a[nb])
	{
		ft_putchar_fd(a[nb], fd);
		++nb;
	}
	free(a);
	return (nb);
}
