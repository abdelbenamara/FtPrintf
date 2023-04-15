/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:03:35 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/15 12:11:35 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion/specifiers/libftprintf_conversion_specifiers.h"

size_t	ft_specifier_len(const char *format)
{
	size_t	i;

	i = 1;
	while (format[i] && !ft_is_specifier(format[i]) && !ft_isalpha(format[i]))
		++i;
	return (i);
}
