/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdconvert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:56:33 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/23 09:47:30 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vdconvert(int fd, const char **format, va_list *ap)
{
	static int	(*ft_vd_conversion[])(int, t_csfwp *, va_list *) = {
		ft_vdc_conversion, ft_vds_conversion, ft_vdp_conversion,
		ft_vdd_conversion, ft_vdi_conversion, ft_vdu_conversion,
		ft_vdx_conversion, ft_vdupperx_conversion, ft_vdpercent_conversion
	};
	t_csfwp		*specs;
	uint8_t		i;

	specs = ft_parse_specifications(*format);
	if (!specs)
		return (0);
	i = 0;
	while (SPECIFIERS[i] != (*format)[specs->len])
	{
		++i;
		if (i == 9)
			return (ft_putchar_fd(**format, fd), free(specs), 1);
	}
	*format += specs->len;
	return (ft_vd_conversion[i](fd, specs, ap));
}
