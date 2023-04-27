/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdpercent_conversion.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:41 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 06:45:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vdpercent_conversion(int fd, t_csfwp *specs, va_list *ap)
{
	(void) ap;
	ft_putchar_fd('%', fd);
	return (free(specs), 1);
}
