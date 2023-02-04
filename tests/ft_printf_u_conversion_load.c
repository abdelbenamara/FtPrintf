/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:43:29 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 22:46:48 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_u_conversion_load(void)
{
	const unsigned int	u[5] = { 0, 123456789, 1000000000, 2147483647, 4294967295 };
	int					n;
	int					nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%u" EOL, u[n]);
		printf("%d" EOL, nb);
		nb = printf("%u" EOL, u[n]);
		printf("%d" EOL, nb);
		++n;
	}
}

int	main(void)
{
	ft_printf_u_conversion_load();
	return (0);
}
