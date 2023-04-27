/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdc_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:35:57 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 06:24:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vdc_conversion(int fd, t_csfwp *specs, va_list *ap)
{
	char	c;
	int		nb;

	c = va_arg(*ap, int);
	nb = ft_adjust_left(fd, specs, 1);
	ft_putchar_fd(c, fd);
	return (free(specs), nb + 1);
}
