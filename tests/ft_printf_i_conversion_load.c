/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:34:41 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/29 02:59:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const int	i[10] = { 0, -0, -123, 456, -2147483648, 2147483647, 1000000000, 0, -2147483648, 2147483647 };
	int			n;
	int			nb;

	n = 0;
	while (n < 7)
	{
		nb = ft_printf("%i" EOL, i[n]);
		printf("%d" EOL, nb);
		nb = printf("%i" EOL, i[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%i %i %i" EOL, i[7], i[8], i[9]);
	printf("%d" EOL, nb);
	nb = printf("%i %i %i" EOL, i[7], i[8], i[9]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
