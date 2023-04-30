/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_conversion_specifications.h            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:08:10 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/29 22:27:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_CONVERSION_SPECIFICATIONS_H
# define LIBFTPRINTF_CONVERSION_SPECIFICATIONS_H

# include "libftprintf.h"

# define SPECIFIERS "cspdiuxX%"
# define FLAGS "#0- +"

typedef struct s_cfwps
{
	uint8_t	alternate_form_flag;
	uint8_t	zero_flag;
	uint8_t	left_adjustement_flag;
	uint8_t	blank_flag;
	uint8_t	sign_flag;
	size_t	field_width;
	ssize_t	precision;
	char	specifier;
	size_t	len;
}	t_cfwps;

int		ft_adjust_left(int fd, t_cfwps *specs, size_t len);
int		ft_adjust_right(int fd, t_cfwps *specs, size_t len);

uint8_t	ft_is_flag(char c);
uint8_t	ft_is_specifier(char c);

void	ft_parse_field_width(const char *format, size_t *idx, t_cfwps *specs);
void	ft_parse_flags(const char *format, size_t *idx, t_cfwps *specs);
void	ft_parse_precision(const char *format, size_t *idx, t_cfwps *specs);

t_cfwps	*ft_parse_specifications(const char *format);

#endif
