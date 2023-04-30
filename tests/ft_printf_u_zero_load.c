/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_zero_load.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:43:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/29 03:02:26 by abenamar         ###   ########.fr       */
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
		nb = ft_printf("%07u" EOL, u[n]);
		printf("%d" EOL, nb);
		nb = printf("%07u" EOL, u[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%01u %060u %0789u" EOL, u[5], u[6], u[7]);
	printf("%d" EOL, nb);
	nb = printf("%01u %060u %0789u" EOL, u[5], u[6], u[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
