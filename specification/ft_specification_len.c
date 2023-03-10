/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specification_len.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:53 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/07 01:16:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "specification/libftprintf_specification.h"

size_t	ft_specification_len(const char *format)
{
	size_t	len;

	if (*format != '%')
		return (0);
	++format;
	len = 1;
	while (*format && !ft_is_specifier(*format) && !ft_isalpha(*format))
	{
		++format;
		++len;
	}
	if (!*format)
		return (0);
	return (len);
}
