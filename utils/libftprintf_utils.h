/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_utils.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:49:15 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 13:26:22 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_UTILS_H
# define LIBFTPRINTF_UTILS_H

# include "libftprintf.h"

char	*ft_uitoa_base(unsigned int n, const char *base);
char	*ft_uiptrtoa_base(uintptr_t n, const char *base);

#endif