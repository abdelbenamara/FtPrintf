/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdu_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:49 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 07:30:54 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"
#include "libftprintf_conversion.h"

int	ft_vdu_conversion(int fd, t_csfwp *specs, va_list *ap)
{
	unsigned int	u;
	char			*a;
	size_t			len;
	int				nb;

	u = va_arg(*ap, unsigned int);
	a = ft_uitoa_base(u, "0123456789");
	len = ft_strlen(a);
	nb = ft_adjust_right(fd, specs, len);
	ft_putstr_fd(a, fd);
	nb += ft_adjust_left(fd, specs, len);
	return (free(a), free(specs), nb + len);
}
