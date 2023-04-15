/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_conversion_specifiers.h                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:08:10 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/15 12:10:09 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_CONVERSION_SPECIFIERS_H
# define LIBFTPRINTF_CONVERSION_SPECIFIERS_H

# define SPECIFIERS "cspdiuxX%"

# include "libftprintf.h"

typedef struct s_flags
{
	uint8_t	alternate_form;
	size_t	specifier_len;
}	t_flags;

uint8_t	ft_is_specifier(char c);
size_t	ft_specifier_len(const char *format);
t_flags	*ft_parse_specifier(const char *format);

#endif