/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_conversion.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:22:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 13:28:55 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_CONVERSION_H
# define LIBFTPRINTF_CONVERSION_H

# include "libftprintf.h"
# include "libftprintf_conversion_specifications.h"

int	ft_vdc_conversion(int fd, t_csfwp *specs, va_list *ap);
int	ft_vds_conversion(int fd, t_csfwp *specs, va_list *ap);
int	ft_vdp_conversion(int fd, t_csfwp *specs, va_list *ap);
int	ft_vdd_conversion(int fd, t_csfwp *specs, va_list *ap);
int	ft_vdi_conversion(int fd, t_csfwp *specs, va_list *ap);
int	ft_vdu_conversion(int fd, t_csfwp *specs, va_list *ap);
int	ft_vdx_conversion(int fd, t_csfwp *specs, va_list *ap);
int	ft_vdupperx_conversion(int fd, t_csfwp *specs, va_list *ap);
int	ft_vdconvert(int fd, const char **format, va_list *ap);

#endif
