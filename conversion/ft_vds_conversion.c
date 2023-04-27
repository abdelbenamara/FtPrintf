/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vds_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:58:19 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 07:30:43 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion.h"

int	ft_vds_conversion(int fd, t_csfwp *specs, va_list *ap)
{
	char	*s;
	size_t	len;
	int		nb;

	s = va_arg(*ap, char *);
	if (!s)
		return (ft_putstr_fd("(null)", fd), free(specs), 6);
	else
	{
		len = ft_strlen(s);
		nb = ft_adjust_right(fd, specs, len);
		ft_putstr_fd(s, fd);
		nb += ft_adjust_left(fd, specs, len);
		return (free(specs), nb + len);
	}
}
