/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_i_conversion_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 18:44:22 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion/libftprintf_conversion.h"

int	ft_put_i_conversion_fd(const char *format, va_list *ap, int fd)
{
	return (ft_put_d_conversion_fd(format, ap, fd));
}
