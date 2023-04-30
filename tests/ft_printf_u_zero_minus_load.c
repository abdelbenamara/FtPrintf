/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_zero_minus_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:43:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/29 03:02:35 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const unsigned int	u[8] = { 0, 123456789, 1000000000, 2147483647, 4294967295, 0, 1000000000, 4294967295 };
	int					n;
	int					nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%0-7u" EOL, u[n]);
		printf("%d" EOL, nb);
		nb = printf("%0-7u" EOL, u[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%0-1u %0-60u %0-789u" EOL, u[5], u[6], u[7]);
	printf("%d" EOL, nb);
	nb = printf("%0-1u %0-60u %0-789u" EOL, u[5], u[6], u[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
