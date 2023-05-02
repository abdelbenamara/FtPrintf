/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdstr_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:58:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/02 02:12:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_vdstr_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	char	*s;
	size_t	len;
	int		nb;
	size_t	i;

	s = (char *) va_arg(*ap, const char *);
	if (!s)
		s = "(null)";
	len = ft_min_width(ft_strlen(s), specs->precision);
	nb = ft_adjust_width(0, fd, specs, len);
	i = 0;
	while (i < len)
		(ft_putchar_fd(s[i], fd), ++i);
	nb += ft_adjust_width(1, fd, specs, len);
	return (free(specs), nb + len);
}
