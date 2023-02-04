/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:55:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 23:05:35 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_conversion.h"

static size_t	uint_to_strlen(unsigned int n)
{
	size_t			len;
	unsigned int	i;

	len = 0;
	i = n;
	if (!n)
		++len;
	while (i > 0)
	{
		++len;
		i = i / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	unsigned int	i;
	size_t			len;
	char			*a;

	i = n;
	len = uint_to_strlen(n);
	a = ft_calloc(len + 1, sizeof(char));
	if (!a)
		return (NULL);
	if (!n)
		a[0] = '0';
	while (i > 0)
	{
		--len;
		a[len] = i % 10 + '0';
		i = i / 10;
	}
	return (a);
}
