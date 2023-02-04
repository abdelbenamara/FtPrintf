/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu_conversion_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:49 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 22:58:12 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"

int	ft_putu_conversion_fd(const char *format, va_list ap, int fd)
{
	int				nb;
	unsigned int	u;
	char			*a;

	(void)format;
	u = va_arg(ap, unsigned int);
	a = ft_uitoa(u);
	u = 0;
	while (a[u])
	{
		ft_putchar_fd(a[u], fd);
		++u;
	}
	free(a);
	nb = u;
	return (nb);
}
