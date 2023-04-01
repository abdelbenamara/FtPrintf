/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:05:08 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/01 23:10:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_s_conversion_load(void)
{
	const char	*s[9] = { NULL, "", "\rtest\b", "àéîüœ", "Hello World!", "0123456789", "toto", "titi", "tutu" };
	int			n;
	int			nb;

	n = 0;
	while (n < 6)
	{
		nb = ft_printf("%s" EOL, s[n]);
		printf("%d" EOL, nb);
		nb = printf("%s" EOL, s[n]);
		printf("%d" EOL, nb);
		++n;
	}
	nb = ft_printf("%s %s %s" EOL, s[6], s[7], s[8]);
	printf("%d" EOL, nb);
	nb = printf("%s %s %s" EOL, s[6], s[7], s[8]);
	printf("%d" EOL, nb);
}

int	main(void)
{
	ft_printf_s_conversion_load();
	return (0);
}
