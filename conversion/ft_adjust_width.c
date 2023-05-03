/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:10:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/03 01:47:37 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static uint8_t	ft_is_numeric_conversion(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X')
		return (1);
	else
		return (0);
}

int	ft_adjust_width(uint8_t left, int fd, t_cfwps *specs, size_t width)
{
	size_t	nb;

	nb = 0;
	if (!left && !specs->left_adjustement_flag && specs->min_width > width)
	{
		if (specs->zero_flag && ft_is_numeric_conversion(specs->specifier))
			while (nb < specs->min_width - width)
				(ft_putchar_fd('0', fd), ++nb);
		else
			while (nb < specs->min_width - width)
				(ft_putchar_fd(' ', fd), ++nb);
	}
	else if (left && specs->left_adjustement_flag && specs->min_width > width)
		while (nb < specs->min_width - width)
			(ft_putchar_fd(' ', fd), ++nb);
	return (nb);
}
