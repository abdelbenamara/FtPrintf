/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:27:44 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 17:48:53 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_conversion_specifications.h"

uint8_t	ft_is_flag(const char c)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (c == FLAGS[i])
			return (1);
		++i;
	}
	return (0);
}
