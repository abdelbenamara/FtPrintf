/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_blank_sign_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:27:55 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 16:57:25 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_d_blank_sign_load(void)
{
	const int	d[10] = { 0, -0, -123, 456, -2147483648, 2147483647, 1000000000, 1, -2, 3 };
	int			n;
	int			nb;

	n = 0;
	while (n < 7)
	{
		nb = ft_printf("% +d" EOL, d[n]);
		printf("%d" EOL, nb);
		nb = printf("% +d" EOL, d[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("% +d % +d % +d" EOL, d[7], d[8], d[9]);
	printf("%d" EOL, nb);
	nb = printf("% +d % +d % +d" EOL, d[7], d[8], d[9]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	ft_printf_d_blank_sign_load();
	return (0);
}
