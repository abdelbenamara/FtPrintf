/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vds_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:58:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 14:14:20 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vds_conversion(int fd, t_cslpf *flags, va_list *ap)
{
	int		nb;
	char	*s;

	s = va_arg(*ap, char *);
	if (!s)
	{
		ft_putstr_fd("(null)", fd);
		nb = 6;
	}
	else
	{
		nb = 0;
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			++s;
			++nb;
		}
	}
	free(flags);
	return (nb);
}
