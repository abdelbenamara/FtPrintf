/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:03:35 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 16:19:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

void	ft_parse_flags(const char c, t_cslpf *flags)
{
	if (c == '#')
		flags->alternate_form = 1;
	else if (c == ' ')
		flags->blank = 1;
	else if (c == '+')
		flags->sign = 1;
}
