/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putconversion_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:56:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 23:03:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"

int	ft_putconversion_fd(char c, const char *format, va_list ap, int fd)
{
	const char	*specifiers = SPECIFIERS;
	int			(*conversions[9])(const char *, va_list, int);
	uint8_t		i;

	conversions[0] = ft_putc_conversion_fd;
	conversions[1] = ft_puts_conversion_fd;
	conversions[2] = ft_putp_conversion_fd;
	conversions[3] = ft_putd_conversion_fd;
	conversions[4] = ft_puti_conversion_fd;
	conversions[5] = ft_putu_conversion_fd;
	conversions[6] = ft_putx_conversion_fd;
	conversions[7] = ft_putupper_x_conversion_fd;
	conversions[8] = ft_putpercent_conversion_fd;
	i = 0;
	while (specifiers[i] != c)
		++i;
	if (i == 9)
		return (-1);
	return (conversions[i](format, ap, fd));
}
