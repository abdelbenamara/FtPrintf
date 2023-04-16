/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdi_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 14:14:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vdi_conversion(int fd, t_cslpf *flags, va_list *ap)
{
	return (ft_vdd_conversion(fd, flags, ap));
}
