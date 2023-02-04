/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _conversion.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:22:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 23:01:42 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONVERSION_H
# define _CONVERSION_H

# define SPECIFIERS	"cspdiuxX%"

# include "libftprintf.h"

uint8_t	ft_is_specifier(char c);
size_t	ft_specification_len(const char *format);	
char	*ft_uitoa(unsigned int n);

int		ft_putc_conversion_fd(const char *format, va_list ap, int fd);
int		ft_puts_conversion_fd(const char *format, va_list ap, int fd);
int		ft_putp_conversion_fd(const char *format, va_list ap, int fd);
int		ft_putd_conversion_fd(const char *format, va_list ap, int fd);
int		ft_puti_conversion_fd(const char *format, va_list ap, int fd);
int		ft_putu_conversion_fd(const char *format, va_list ap, int fd);
int		ft_putx_conversion_fd(const char *format, va_list ap, int fd);
int		ft_putupper_x_conversion_fd(const char *format, va_list ap, int fd);
int		ft_putpercent_conversion_fd(const char *format, va_list ap, int fd);
int		ft_putconversion_fd(char c, const char *format, va_list ap, int fd);

#endif
