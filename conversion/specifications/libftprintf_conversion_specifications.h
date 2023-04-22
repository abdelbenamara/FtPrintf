/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_conversion_specifications.h            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:08:10 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 16:18:28 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_CONVERSION_SPECIFICATIONS_H
# define LIBFTPRINTF_CONVERSION_SPECIFICATIONS_H

# define SPECIFIERS "cspdiuxX%"

# include "libftprintf.h"

typedef struct s_cslpf
{
	uint8_t	alternate_form;
	uint8_t	blank;
	uint8_t	sign;
	size_t	specifier_len;
}	t_cslpf;

uint8_t	ft_is_specifier(char c);
void	ft_parse_flags(const char c, t_cslpf *flags);
t_cslpf	*ft_parse_specifications(const char *format);

#endif