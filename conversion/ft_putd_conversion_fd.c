/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putd_conversion_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:05 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 21:15:12 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"

int	ft_putd_conversion_fd(const char *format, va_list ap, int fd)
{
	int		nb;
	int		i;
	char	*a;

	(void)format;
	i = va_arg(ap, int);
	a = ft_itoa(i);
	i = 0;
	while (a[i])
	{
		ft_putchar_fd(a[i], fd);
		++i;
	}
	free(a);
	nb = i;
	return (nb);
}
