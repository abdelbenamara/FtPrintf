/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_zero_load.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:30:00 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 12:20:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const unsigned int	x[8] = { 0, 123456789, 1000000000, 2147483647, 4294967295, 2147483648, 2147483649, 2147483650 };
	int					n;
	int					nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%08x" EOL, x[n]);
		printf("%d" EOL, nb);
		nb = printf("%08x" EOL, x[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%01x %080x %0890x" EOL, x[5], x[6], x[7]);
	printf("%d" EOL, nb);
	nb = printf("%01x %080x %0890x" EOL, x[5], x[6], x[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
