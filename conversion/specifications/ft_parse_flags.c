/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:03:35 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 22:43:20 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

void	ft_parse_flags(const char *format, size_t *idx, t_csfwp *specs)
{
	if (format[*idx] == '#')
		specs->alternate_form_flag = 1;
	else if (format[*idx] == ' ')
		specs->blank_flag = 1;
	else if (format[*idx] == '+')
		specs->sign_flag = 1;
	++(*idx);
}
