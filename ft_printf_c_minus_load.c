/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c_minus_load.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:10:42 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/02 01:40:52 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const int	c[8] = { 'a', ' ', '0', '\v', 250, 'x', 'y', 'z' };
	int			n;
	int			nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%-2c" EOL, c[n]);
		printf("%d" EOL, nb);
		nb = printf("%-2c" EOL, c[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%-5c %-10c %-123c" EOL, c[5], c[6], c[7]);
	printf("%d" EOL, nb);
	nb = printf("%-5c %-10c %-123c" EOL, c[5], c[6], c[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
