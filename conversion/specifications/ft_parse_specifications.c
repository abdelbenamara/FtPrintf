/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specifications.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:53 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/23 09:47:11 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

static t_csfwp	*ft_init_specs(void)
{
	t_csfwp	*specs;

	specs = malloc(sizeof(t_csfwp));
	if (!specs)
		return (NULL);
	specs->alternate_form_flag = 0;
	specs->blank_flag = 0;
	specs->sign_flag = 0;
	specs->field_width = 0;
	specs->len = 0;
	return (specs);
}

t_csfwp	*ft_parse_specifications(const char *format)
{
	t_csfwp	*specs;
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
		else
			++i;
	}
	specs->len = i;
	return (specs);
}
