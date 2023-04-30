/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specifications.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:53 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 00:52:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

static t_cfwps	*ft_init_specs(void)
{
	t_cfwps	*specs;

	specs = malloc(sizeof(t_cfwps));
	if (!specs)
		return (NULL);
	specs->alternate_form_flag = 0;
	specs->left_adjustement_flag = 0;
	specs->zero_flag = 0;
	specs->blank_flag = 0;
	specs->sign_flag = 0;
	specs->field_width = 0;
	specs->precision = -1;
	return (specs);
}

t_cfwps	*ft_parse_specifications(const char *format)
{
	t_cfwps	*specs;
	size_t	i;

	specs = ft_init_specs();
	if (!specs)
		return (NULL);
	i = 1;
	while (format[i] && !ft_is_specifier(format[i]) && !ft_isalpha(format[i]))
	{
		if (ft_is_flag(format[i]))
			ft_parse_flags(format, &i, specs);
		else if (ft_isdigit(format[i]))
			ft_parse_field_width(format, &i, specs);
		else if (format[i] == '.')
		{
			ft_parse_precision(format, &i, specs);
			break ;
		}
		else
			++i;
	}
	specs->specifier = format[i];
	specs->len = i;
	return (specs);
}
