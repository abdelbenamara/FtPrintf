/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:10:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/29 02:01:59 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

int	ft_adjust_left(int fd, t_cfwps *specs, size_t len)
{
	size_t	nb;

	nb = 0;
	if (specs->left_adjustement_flag && specs->field_width > len)
	{
		while (nb < specs->field_width - len)
		{
			ft_putchar_fd(' ', fd);
			++nb;
		}
	}
	return (nb);
}
