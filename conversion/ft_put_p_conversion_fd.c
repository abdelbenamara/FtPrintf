/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p_conversion_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:00:40 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 18:45:40 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils/libftprintf_utils.h"
#include "conversion/libftprintf_conversion.h"

int	ft_put_p_conversion_fd(const char *format, va_list *ap, int fd)
{
	int		nb;
	void	*p;
	char	*a;

	(void)format;
	p = va_arg(*ap, void *);
	if (!p)
	{
		ft_putstr_fd("(nil)", fd);
		nb = 5;
	}
	else
	{
		a = ft_uiptrtoa_base((uintptr_t) p, "0123456789abcdef");
		ft_putstr_fd("0x", fd);
		nb = 0;
		while (a[nb])
		{
			ft_putchar_fd(a[nb], fd);
			++nb;
		}
		nb += 2;
		free(a);
	}
	return (nb);
}
