/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_zero_load.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:33:14 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/02 01:44:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const int	d[10] = { 0, -0, -123, 456, -2147483648, 2147483647, 1000000000, 0, -2147483648, 2147483647 };
	int			n;
	int			nb;

	n = 0;
	while (n < 7)
	{
		nb = ft_printf("%05d" EOL, d[n]);
		printf("%d" EOL, nb);
		nb = printf("%05d" EOL, d[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%020d %040d %0456d" EOL, d[7], d[8], d[9]);
	printf("%d" EOL, nb);
	nb = printf("%020d %040d %0456d" EOL, d[7], d[8], d[9]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
