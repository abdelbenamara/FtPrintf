/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdd_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:05 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 15:23:15 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

static int	ft_process_flags(int fd, t_cslpf *flags, int i)
{
	int	nb;

	nb = 0;
	if (i >= 0 && flags->sign)
	{
		ft_putchar_fd('+', fd);
		++nb;
	}
	else if (i >= 0 && flags->blank)
	{
		ft_putchar_fd(' ', fd);
		++nb;
	}
	return (nb);
}

int	ft_vdd_conversion(int fd, t_cslpf *flags, va_list *ap)
{
	int		nb;
	int		i;
	char	*a;

	i = va_arg(*ap, int);
	a = ft_itoa(i);
	nb = ft_process_flags(fd, flags, i);
	i = 0;
	while (a[i])
	{
		ft_putchar_fd(a[i], fd);
		++i;
	}
	free(a);
	nb += i;
	free(flags);
	return (nb);
}
