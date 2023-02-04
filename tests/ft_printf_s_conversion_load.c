/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:05:08 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 22:10:18 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_s_conversion_load(void)
{
	const char	*s[5] = { "", "\rtest\b", "àéîüœ", "Hello World!", "0123456789" };
	int			n;
	int			nb;

	n = 0;
	while (n < 5)
	{
		nb = ft_printf("%s" EOL, s[n]);
		printf("%d" EOL, nb);
		nb = printf("%s" EOL, s[n]);
		printf("%d" EOL, nb);
		++n;
	}
}

int	main(void)
{
	ft_printf_s_conversion_load();
	return (0);
}
