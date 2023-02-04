/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:34:41 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 20:37:47 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_i_conversion_load(void)
{
	const int	i[7] = { 0, -0, -123, 456, -2147483648, 2147483647, 1000000000 };
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
}

int	main(void)
{
	ft_printf_i_conversion_load();
	return (0);
}
