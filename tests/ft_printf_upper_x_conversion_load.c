/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_upper_x_conversion_load.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:08:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 22:06:50 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_upper_x_conversion_load(void)
{
	const unsigned int	upper_x[8] = { 0, 123456789, 1000000000, 2147483647, 4294967295, 2147483648, 2147483649, 2147483650 };
	int					n;
	int					nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%X" EOL, upper_x[n]);
		printf("%d" EOL, nb);
		nb = printf("%X" EOL, upper_x[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%X %X %X" EOL, upper_x[5], upper_x[6], upper_x[7]);
	printf("%d" EOL, nb);
	nb = printf("%X %X %X" EOL, upper_x[5], upper_x[6], upper_x[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	ft_printf_upper_x_conversion_load();
	return (0);
}