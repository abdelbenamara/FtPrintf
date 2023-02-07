/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:59:53 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/07 01:34:02 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion/libftprintf_conversion.h"

t_conv	*ft_init_conversions(void)
{
	static t_conv	conversions[CONVERSION_AMOUNT];

	conversions[0] = ft_put_c_conversion_fd;
	conversions[1] = ft_put_s_conversion_fd;
	conversions[2] = ft_put_p_conversion_fd;
	conversions[3] = ft_put_d_conversion_fd;
	conversions[4] = ft_put_i_conversion_fd;
	conversions[5] = ft_put_u_conversion_fd;
	conversions[6] = ft_put_x_conversion_fd;
	conversions[7] = ft_put_upper_x_conversion_fd;
	conversions[8] = ft_put_percent_conversion_fd;
	return (conversions);
}
