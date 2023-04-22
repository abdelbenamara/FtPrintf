/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:27:44 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 16:19:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

uint8_t	ft_is_specifier(const char c)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (c == SPECIFIERS[i])
			return (1);
		++i;
	}
	return (0);
}
