/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s_minus_precision_load.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:05:08 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/02 01:38:39 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const char	*s[9] = { NULL, "", "\rtest\b", "àéîüœ", "Hello World!", "0123456789", NULL, "", "123" };
	int			n;
	int			nb;

	n = 0;
	while (n < 6)
	{
		nb = ft_printf("%-3.7s" EOL, s[n]);
		printf("%d" EOL, nb);
		nb = printf("%-3.7s" EOL, s[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%-10.s %-20.0s %-234.001s" EOL, s[6], s[7], s[8]);
	printf("%d" EOL, nb);
	nb = printf("%-10.s %-20.0s %-234.001s" EOL, s[6], s[7], s[8]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
