/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:53 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 15:10:26 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion/specifiers/libftprintf_conversion_specifiers.h"

static t_cslpf	*ft_init_flags(void)
{
	t_cslpf	*flags;

	flags = malloc(sizeof(t_cslpf));
	if (!flags)
		return (NULL);
	flags->alternate_form = 0;
	flags->specifier_len = 0;
	return (flags);
}

t_cslpf	*ft_parse_specifier(const char *format)
{
	t_cslpf	*flags;
	size_t	i;

	flags = ft_init_flags();
	if (!flags)
		return (NULL);
	i = 1;
	while (format[i] && !ft_is_specifier(format[i]) && !ft_isalpha(format[i]))
	{
		ft_parse_flags(format[i], flags);
		++i;
	}
	flags->specifier_len = i;
	return (flags);
}
