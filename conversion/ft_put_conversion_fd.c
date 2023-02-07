/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_conversion_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:56:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/07 01:34:14 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "specification/libftprintf_specification.h"
#include "conversion/libftprintf_conversion.h"

int	ft_put_conversion_fd(size_t s_len, const char *fmt, va_list ap, int fd)
{
	const t_conv	*conversions = ft_init_conversions();
	const char		*specifiers = SPECIFIERS;
	uint8_t			i;

	if (!s_len)
		return (-1);
	i = 0;
	while (specifiers[i] != fmt[s_len])
		++i;
	if (i == CONVERSION_AMOUNT)
		return (-1);
	return (conversions[i](fmt, ap, fd));
}
