/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdstr_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:58:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/02 22:09:52 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_vdstr_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	const char	*s;
	char		*a;
	size_t		len;
	size_t		width;
	int			nb;

	s = va_arg(*ap, const char *);
	if (!s)
		a = ft_strdup("(null)");
	else
		a = ft_strdup(s);
	len = ft_strlen(a);
	width = ft_min_width(len, specs->precision);
	if (!s && specs->precision > 0 && width < len)
		width = 0;
	nb = ft_adjust_width(0, fd, specs, width);
	len = 0;
	while (len < width)
		(ft_putchar_fd(a[len], fd), ++len);
	nb += ft_adjust_width(1, fd, specs, width);
	return (free(a), free(specs), nb + len);
}
