/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_upperx_field_width_precision_load        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:08:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/30 00:21:16 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const unsigned int	upperx[8] = { 0, 123456789, 1000000000, 2147483647, 4294967295, 0, 1000000000, 4294967295 };
	int					n;
	int					nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%9.11X" EOL, upperx[n]);
		printf("%d" EOL, nb);
		nb = printf("%9.11X" EOL, upperx[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%1.X %80.X %901.0X" EOL, upperx[5], upperx[6], upperx[7]);
	printf("%d" EOL, nb);
	nb = printf("%1.X %80.X %901.0X" EOL, upperx[5], upperx[6], upperx[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
