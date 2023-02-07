/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_specification.h                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:41:59 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/07 01:14:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_SPECIFICATION_H
# define LIBFTPRINTF_SPECIFICATION_H

# define SPECIFIERS	"cspdiuxX%"

# include "libftprintf.h"

uint8_t	ft_is_specifier(char c);
size_t	ft_specification_len(const char *format);

#endif