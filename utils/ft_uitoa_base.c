/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:55:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/15 13:12:23 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"

static size_t	uint_to_strlen(unsigned int n, size_t base_len)
{
	size_t			len;

	len = 0;
	if (!n)
		++len;
	while (n > 0)
	{
		++len;
		n = n / base_len;
	}
	return (len);
}

char	*ft_uitoa_base(unsigned int n, const char *base)
{
	const size_t	base_len = ft_strlen(base);
	size_t			len;
	char			*a;

	len = uint_to_strlen(n, base_len);
	a = ft_calloc(len + 1, sizeof(char));
	if (!a)
		return (NULL);
	if (!n)
		a[0] = base[0];
	while (n > 0)
	{
		--len;
		a[len] = base[n % base_len];
		n = n / base_len;
	}
	return (a);
}
