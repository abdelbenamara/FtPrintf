/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpercent_conversion_fd.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:03:41 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 21:18:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"

int	ft_putpercent_conversion_fd(const char *format, va_list ap, int fd)
{
	int	nb;

	(void)format;
	(void)ap;
	nb = 0;
	ft_putchar_fd('%', fd);
	++nb;
	return (nb);
}
