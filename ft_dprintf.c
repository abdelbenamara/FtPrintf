/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:01:22 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/01 21:08:48 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_dprintf(int fd, const char *format, ...)
{
	int		res;
	va_list	ap;

	va_start(ap, format);
	res = ft_vdprintf(fd, format, ap);
	va_end(ap);
	return (res);
}
