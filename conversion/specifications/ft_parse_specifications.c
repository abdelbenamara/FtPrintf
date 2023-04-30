/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specifications.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:53 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 12:30:05 by abenamar         ###   ########.fr       */
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

static size_t	ft_set_flag(const char *format, size_t i, t_cfwps *specs)
{
	if (format[i] == '#')
		specs->alternate_form_flag = 1;
	else if (format[i] == '0')
		specs->zero_flag = 1;
	else if (format[i] == '-')
		specs->left_adjustement_flag = 1;
	else if (format[i] == ' ')
		specs->blank_flag = 1;
	else if (format[i] == '+')
		specs->sign_flag = 1;
	return (i + 1);
}

static size_t	ft_set_width(const char *format, size_t i, t_cfwps *specs)
{
	size_t	idx;

	idx = i;
	specs->field_width = ft_atoi(format + idx);
	while (ft_isdigit(format[idx]))
		++idx;
	return (idx);
}

static size_t	ft_set_precision(const char *format, size_t i, t_cfwps *specs)
{
	size_t	idx;
	int		precision;

	idx = i + 1;
	precision = ft_atoi(format + idx);
	if (precision < 0)
		return (i);
	specs->precision = precision;
	specs->zero_flag = 0;
	while (ft_isdigit(format[idx]))
		++idx;
	return (idx);
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
			i = ft_set_flag(format, i, specs);
		else if (ft_isdigit(format[i]))
			i = ft_set_width(format, i, specs);
		else if (format[i] == '.')
			break ;
		else
			++i;
	}
	if (format[i] == '.')
		i = ft_set_precision(format, i, specs);
	specs->specifier = format[i];
	specs->len = i;
	return (specs);
}
