/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts_conversion_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:58:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 21:15:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"

int	ft_puts_conversion_fd(const char *format, va_list ap, int fd)
{
	int		nb;
	char	*s;

	(void)format;
	nb = 0;
	s = va_arg(ap, char *);
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		++s;
		++nb;
	}
	return (nb);
}
