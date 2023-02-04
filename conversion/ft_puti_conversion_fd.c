/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puti_conversion_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 21:15:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"

int	ft_puti_conversion_fd(const char *format, va_list ap, int fd)
{
	return (ft_putd_conversion_fd(format, ap, fd));
}
