/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 23:17:48 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 00:12:53 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"

size_t	ft_min_width(size_t len, ssize_t precision)
{
	if (precision < 0 || len < ((size_t) precision))
		return (len);
	return (precision);
}
