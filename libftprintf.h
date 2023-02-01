/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:34:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/01 21:56:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft.h"
# include <stdarg.h>

int	ft_vdprintf(int fd, const char *format, va_list ap);
int	ft_vprintf(const char *format, va_list ap);

int	ft_dprintf(int fd, const char *format, ...);
int	ft_printf(const char *format, ...);

#endif
