/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:33:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 20:56:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_d_conversion_load(void)
{
	const int	d[7] = { 0, -0, -123, 456, -2147483648, 2147483647, 1000000000 };
	int			n;
	int			nb;

	n = 0;
	while (n < 7)
	{
		nb = ft_printf("%d" EOL, d[n]);
		printf("%d" EOL, nb);
		nb = printf("%d" EOL, d[n]);
		printf("%d" EOL, nb);
		++n;
	}
}

int	main(void)
{
	ft_printf_d_conversion_load();
	return (0);
}
