/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:27:44 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/07 01:15:52 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "specification/libftprintf_specification.h"

uint8_t	ft_is_specifier(const char c)
{
	const char	*specifiers = SPECIFIERS;

	while (*specifiers)
	{
		if (*specifiers == c)
			return (1);
		++specifiers;
	}
	return (0);
}
