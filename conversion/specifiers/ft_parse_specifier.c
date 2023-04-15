/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:53 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/15 12:11:37 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion/specifiers/libftprintf_conversion_specifiers.h"

t_flags	*ft_parse_specifier(const char *format)
{
	t_flags	*flags;

	flags = malloc(sizeof(t_flags));
	if (!flags)
		return (NULL);
	flags->alternate_form = 0;
	flags->specifier_len = ft_specifier_len(format);
	return (flags);
}
