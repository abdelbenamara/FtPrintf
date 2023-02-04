/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent_conversion_load.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:26:44 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 23:29:12 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_percent_conversion_load(void)
{
	int	nb;

	/* 1 */
	nb = ft_printf("%%" EOL);
	printf("%d" EOL, nb);
	nb = printf("%%" EOL);
	printf("%d" EOL, nb);
	/* 2 */
	nb = ft_printf(" %%" EOL);
	printf("%d" EOL, nb);
	nb = printf(" %%" EOL);
	printf("%d" EOL, nb);
	/* 3 */
	nb = ft_printf("%% " EOL);
	printf("%d" EOL, nb);
	nb = printf("%% " EOL);
	printf("%d" EOL, nb);
	/* 4 */
	nb = ft_printf("test%%test" EOL);
	printf("%d" EOL, nb);
	nb = printf("test%%test" EOL);
	printf("%d" EOL, nb);
	/* 5 */
	nb = ft_printf("%%%%%%%%%%" EOL);
	printf("%d" EOL, nb);
	nb = printf("%%%%%%%%%%" EOL);
	printf("%d" EOL, nb);
}

int	main(void)
{
	ft_printf_percent_conversion_load();
	return (0);
}
