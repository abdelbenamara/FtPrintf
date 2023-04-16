/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdpercent_conversion.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:41 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 14:14:18 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vdpercent_conversion(int fd, t_cslpf *flags, va_list *ap)
{
	(void)ap;
	ft_putchar_fd('%', fd);
	free(flags);
	return (1);
}
