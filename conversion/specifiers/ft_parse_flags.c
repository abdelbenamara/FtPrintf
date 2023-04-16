/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:03:35 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 14:21:24 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion/specifiers/libftprintf_conversion_specifiers.h"

void	ft_parse_flags(const char c, t_cslpf *flags)
{
	if (c == '#')
		flags->alternate_form = 1;
}
