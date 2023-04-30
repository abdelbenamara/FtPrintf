/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 11:03:35 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 00:52:40 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

void	ft_parse_precision(const char *format, size_t *idx, t_cfwps *specs)
{
	int	i;

	++(*idx);
	i = ft_atoi(format + *idx);
	if (i < 0)
		return ;
	specs->precision = i;
	specs->zero_flag = 0;
	while (ft_isdigit(format[*idx]))
		++(*idx);
}
