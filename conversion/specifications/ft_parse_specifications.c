/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specifications.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:53 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 16:18:47 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

static t_cslpf	*ft_init_flags(void)
{
	t_cslpf	*flags;

	flags = malloc(sizeof(t_cslpf));
	if (!flags)
		return (NULL);
	flags->alternate_form = 0;
	flags->blank = 0;
	flags->sign = 0;
	flags->specifier_len = 0;
	return (flags);
}

t_cslpf	*ft_parse_specifications(const char *format)
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
