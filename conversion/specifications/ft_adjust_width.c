/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:10:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 13:40:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

static uint8_t	ft_is_numeric_conversion(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X')
		return (1);
	else
		return (0);
}

static size_t	ft_adjust_field(char c, int fd, t_cfwps *specs, size_t width)
{
	size_t	nb;

	nb = 0;
	while (nb < specs->field_width - width)
		(ft_putchar_fd(c, fd), ++nb);
	return (nb);
}

int	ft_adjust_width(uint8_t left, int fd, t_cfwps *specs, size_t width)
{
	char	c;
	size_t	nb;

	c = ' ';
	nb = 0;
	if (!left && !specs->left_adjustement_flag && specs->field_width > width)
	{
		if (specs->zero_flag && ft_is_numeric_conversion(specs->specifier))
			c = '0';
		nb = ft_adjust_field(c, fd, specs, width);
	}
	else if (left && specs->left_adjustement_flag && specs->field_width > width)
		nb = ft_adjust_field(' ', fd, specs, width);
	return (nb);
}
