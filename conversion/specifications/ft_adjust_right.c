/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adjust_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:10:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 12:11:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

int	ft_adjust_right(int fd, t_csfwp *specs, size_t len)
{
	char	c;
	size_t	nb;

	c = ' ';
	nb = 0;
	if (!specs->left_adjustement_flag && specs->field_width > len)
	{
		if (specs->zero_flag && (specs->specifier == 'd'
				|| specs->specifier == 'i' || specs->specifier == 'u'
				|| specs->specifier == 'x' || specs->specifier == 'X'))
			c = '0';
		while (nb < specs->field_width - len)
		{
			ft_putchar_fd(c, fd);
			++nb;
		}
	}
	return (nb);
}
