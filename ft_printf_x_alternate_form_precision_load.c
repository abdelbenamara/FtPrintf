/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_alternate_form_precision_load.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:30:00 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/29 22:51:09 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const unsigned int	x[8] = { 0, 123456789, 1000000000, 2147483647, 4294967295, 0, 1000000000, 4294967295 };
	int					n;
	int					nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%#.11x" EOL, x[n]);
		printf("%d" EOL, nb);
		nb = printf("%#.11x" EOL, x[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%#.x %#.x %#.0x" EOL, x[5], x[6], x[7]);
	printf("%d" EOL, nb);
	nb = printf("%#.x %#.x %#.0x" EOL, x[5], x[6], x[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
