/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent_adjust_left_load.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:26:44 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 06:36:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	int	nb;

	/* 1 */
	nb = ft_printf("%10%" EOL);
	printf("%d" EOL, nb);
	/* 2 */
	nb = printf("%10%" EOL);
	printf("%d" EOL, nb);
	/* 3 */
	nb = ft_printf(" %110%" EOL);
	printf("%d" EOL, nb);
	/* 4 */
	nb = printf(" %110%" EOL);
	printf("%d" EOL, nb);
	/* 5 */
	nb = ft_printf("%210% " EOL);
	printf("%d" EOL, nb);
	/* 6 */
	nb = printf("%210% " EOL);
	printf("%d" EOL, nb);
	/* 7 */
	nb = ft_printf(" %310% " EOL);
	printf("%d" EOL, nb);
	/* 8 */
	nb = printf(" %310% " EOL);
	printf("%d" EOL, nb);
	/* 9 */
	nb = ft_printf("test%410%test" EOL);
	printf("%d" EOL, nb);
	/* 10 */
	nb = printf("test%410%test" EOL);
	printf("%d" EOL, nb);
	/* 11 */
	nb = ft_printf("%1% %100%%101%%102% %1000%" EOL);
	printf("%d" EOL, nb);
	/* 12 */
	nb = printf("%1% %100%%101%%102% %1000%" EOL);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
