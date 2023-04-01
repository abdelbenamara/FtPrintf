/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_percent_conversion_fd.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:41 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 18:44:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion/libftprintf_conversion.h"

int	ft_put_percent_conversion_fd(const char *format, va_list *ap, int fd)
{
	(void)format;
	(void)ap;
	ft_putchar_fd('%', fd);
	return (1);
}
