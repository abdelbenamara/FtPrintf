/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i_zero_precision_load.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:34:41 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/03 01:39:04 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const int	i[10] = { 0, -0, -1234, 456, -2147483648, 2147483647, 1000000000, 0, -2147483648, 2147483647 };
	int			n;
	int			nb;

	n = 0;
	while (n < 7)
	{
		nb = ft_printf("%05.15i" EOL, i[n]);
		printf("%d" EOL, nb);
		nb = printf("%05.15i" EOL, i[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%025.i %050.i %0567.0i" EOL, i[7], i[8], i[9]);
	printf("%d" EOL, nb);
	nb = printf("%025.i %050.i %0567.0i" EOL, i[7], i[8], i[9]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
