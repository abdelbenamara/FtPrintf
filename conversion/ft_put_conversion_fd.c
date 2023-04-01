/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_conversion_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:56:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 16:09:05 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "specification/libftprintf_specification.h"
#include "conversion/libftprintf_conversion.h"

int	ft_put_conversion_fd(size_t s_len, const char *format, va_list ap, int fd)
{
	static int	(*conversions[])(const char *, va_list, int) = {
		ft_put_c_conversion_fd,
		ft_put_s_conversion_fd,
		ft_put_p_conversion_fd,
		ft_put_d_conversion_fd,
		ft_put_i_conversion_fd,
		ft_put_u_conversion_fd,
		ft_put_x_conversion_fd,
		ft_put_upper_x_conversion_fd,
		ft_put_percent_conversion_fd
	};
	uint8_t		i;

	i = 0;
	while (SPECIFIERS[i] != format[s_len])
	{
		++i;
		if (i == 9)
			return (ft_put_no_conversion_fd(s_len, format, fd));
	}
	return (conversions[i](format, ap, fd));
}
