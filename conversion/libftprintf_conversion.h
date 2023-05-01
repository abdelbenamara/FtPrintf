/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_conversion.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:22:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/01 17:05:29 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_CONVERSION_H
# define LIBFTPRINTF_CONVERSION_H

# include "libftprintf.h"
# include "libftprintf_utils.h"
# include "libftprintf_conversion_specifications.h"

int	ft_vdint_conversion(int fd, t_cfwps *specs, va_list ap);
int	ft_vdptr_conversion(int fd, t_cfwps *specs, va_list ap);
int	ft_vdstr_conversion(int fd, t_cfwps *specs, va_list ap);
int	ft_vduint_conversion(int fd, t_cfwps *specs, va_list ap);

int	ft_vdconvert(int fd, const char **format, va_list ap);

#endif
