/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:10:42 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 20:36:40 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_c_conversion_load(void)
{
	const int	c[5] = { 'a', ' ', '0', '\v', 250 };
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
}

int	main(void)
{
	ft_printf_c_conversion_load();
	return (0);
}
