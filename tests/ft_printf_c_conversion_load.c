/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:10:42 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 18:34:48 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_c_conversion_load(void)
{
	const int	c[8] = { 'a', ' ', '0', '\v', 250, 'x', 'y', 'z' };
	int			n;
	int			nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%c" EOL, c[n]);
		printf("%d" EOL, nb);
		nb = printf("%c" EOL, c[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%c %c %c" EOL, c[5], c[6], c[7]);
	printf("%d" EOL, nb);
	nb = printf("%c %c %c" EOL, c[5], c[6], c[7]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	ft_printf_c_conversion_load();
	return (0);
}
