/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_conversion.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:22:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 18:43:28 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_CONVERSION_H
# define LIBFTPRINTF_CONVERSION_H

# include "libftprintf.h"

int	ft_put_c_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_s_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_p_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_d_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_i_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_u_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_x_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_upper_x_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_percent_conversion_fd(const char *format, va_list *ap, int fd);
int	ft_put_no_conversion_fd(size_t s_len, const char *format, int fd);
int	ft_put_conversion_fd(size_t s_len, const char *format, va_list *ap, int fd);

#endif
