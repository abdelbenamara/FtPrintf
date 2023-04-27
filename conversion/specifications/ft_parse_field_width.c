/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_field_width.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:03:35 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 22:47:08 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

void	ft_parse_field_width(const char *format, size_t *idx, t_csfwp *specs)
{
	specs->field_width = ft_atoi(format + *idx);
	while (ft_isdigit(format[*idx]))
		++(*idx);
}
