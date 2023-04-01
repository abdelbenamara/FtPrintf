/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:43:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 22:00:56 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_u_conversion_load(void)
{
	const unsigned int	u[8] = { 0, 123456789, 1000000000, 2147483647, 4294967295, 2147483648, 2147483649, 2147483650 };
	int					n;
	int					nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%u" EOL, u[n]);
		printf("%d" EOL, nb);
		nb = printf("%u" EOL, u[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%u %u %u" EOL, u[5], u[6], u[7]);
	printf("%d" EOL, nb);
	nb = printf("%u %u %u" EOL, u[5], u[6], u[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	ft_printf_u_conversion_load();
	return (0);
}
