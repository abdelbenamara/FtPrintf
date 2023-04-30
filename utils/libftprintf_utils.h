/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_utils.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:49:15 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 12:23:29 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_UTILS_H
# define LIBFTPRINTF_UTILS_H

# include "libftprintf.h"

size_t	ft_max_width(size_t len, ssize_t precision);
size_t	ft_min_width(size_t len, ssize_t precision);
char	*ft_uitoa_base(unsigned int n, const char *base);
char	*ft_uiptrtoa_base(uintptr_t n, const char *base);

#endif
