/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdc_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:35:57 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 14:13:41 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vdc_conversion(int fd, t_cslpf *flags, va_list *ap)
{
	int		nb;
	char	c;

	nb = 0;
	c = va_arg(*ap, int);
	ft_putchar_fd(c, fd);
	++nb;
	free(flags);
	return (nb);
}
