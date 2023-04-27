/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_conversion_specifications.h            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:08:10 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 06:24:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_CONVERSION_SPECIFICATIONS_H
# define LIBFTPRINTF_CONVERSION_SPECIFICATIONS_H

# include "libftprintf.h"

# define SPECIFIERS "cspdiuxX%"
# define FLAGS "#0- +"

typedef struct s_csfwp
{
	uint8_t	alternate_form_flag;
	uint8_t	blank_flag;
	uint8_t	sign_flag;
	size_t	field_width;
	size_t	len;
}	t_csfwp;

int		ft_adjust_left(int fd, t_csfwp *specs, size_t len);
uint8_t	ft_is_flag(char c);
uint8_t	ft_is_specifier(char c);
void	ft_parse_field_width(const char *format, size_t *idx, t_csfwp *specs);
void	ft_parse_flags(const char *format, size_t *idx, t_csfwp *specs);
t_csfwp	*ft_parse_specifications(const char *format);

#endif