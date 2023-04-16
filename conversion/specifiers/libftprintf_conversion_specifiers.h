/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_conversion_specifiers.h                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:08:10 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 14:25:43 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_CONVERSION_SPECIFIERS_H
# define LIBFTPRINTF_CONVERSION_SPECIFIERS_H

# define SPECIFIERS "cspdiuxX%"

# include "libftprintf.h"

typedef struct s_cslpf
{
	uint8_t	alternate_form;
	size_t	specifier_len;
}	t_cslpf;

uint8_t	ft_is_specifier(char c);
void	ft_parse_flags(const char c, t_cslpf *flags);
t_cslpf	*ft_parse_specifier(const char *format);

#endif