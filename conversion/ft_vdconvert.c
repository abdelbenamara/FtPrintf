/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdconvert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:56:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 11:21:17 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vdconvert(int fd, const char **format, va_list *ap)
{
	static int	(*ft_vd_conversion[])(int, t_cfwps *, va_list *) = {
		ft_vdint_conversion, ft_vdstr_conversion, ft_vdptr_conversion,
		ft_vdint_conversion, ft_vdint_conversion, ft_vduint_conversion,
		ft_vduint_conversion, ft_vduint_conversion
	};
	t_cfwps		*specs;
	uint8_t		i;

	specs = ft_parse_specifications(*format);
	if (!specs)
		return (0);
	i = 0;
	while (SPECIFIERS[i] != specs->specifier)
	{
		++i;
		if (i == 9)
			return (ft_putchar_fd(**format, fd), free(specs), 1);
	}
	*format += specs->len;
	if (i == 8)
		return (ft_putchar_fd('%', fd), free(specs), 1);
	return (ft_vd_conversion[i](fd, specs, ap));
}
