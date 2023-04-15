/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uiptrtoa_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:46:51 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/15 13:12:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_utils.h"

static size_t	uintptr_to_strlen(uintptr_t n, size_t base_len)
{
	size_t	len;

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

char	*ft_uiptrtoa_base(uintptr_t n, const char *base)
{
	const size_t	base_len = ft_strlen(base);
	size_t			len;
	char			*a;

	len = uintptr_to_strlen(n, base_len);
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
