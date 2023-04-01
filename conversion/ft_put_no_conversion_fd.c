/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_no_conversion_fd.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:00:49 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 16:16:31 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion/libftprintf_conversion.h"

int	ft_put_no_conversion_fd(size_t s_len, const char *format, int fd)
{
	size_t	i;
	int		nb;

	i = 0;
	while (i <= s_len)
	{
		ft_putchar_fd(format[i], fd);
		++i;
	}
	nb = i;
	return (nb);
}
