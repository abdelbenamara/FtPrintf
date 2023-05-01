/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_no_conversion_load.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:43:15 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/27 06:41:55 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	int	nb;

	/* 1 */
	nb = ft_printf("" EOL);
	printf("%d" EOL, nb);
	/* 2 */
	nb = printf("" EOL);
	printf("%d" EOL, nb);
	/* 3 */
	nb = ft_printf("\t" EOL);
	printf("%d" EOL, nb);
	/* 4 */
	nb = printf("\t" EOL);
	printf("%d" EOL, nb);
	/* 5 */
	nb = ft_printf("ø" EOL);
	printf("%d" EOL, nb);
	/* 6 */
	nb = printf("ø" EOL);
	printf("%d" EOL, nb);
	/* 7 */
	nb = ft_printf("Hello World!" EOL);
	printf("%d" EOL, nb);
	/* 8 */
	nb = printf("Hello World!" EOL);
	printf("%d" EOL, nb);
	/* 9 */
	nb = ft_printf("123" EOL);
	printf("%d" EOL, nb);
	/* 10 */
	nb = printf("123" EOL);
	printf("%d" EOL, nb);
	/* 11 */
	nb = ft_printf("%1b %23y %100r" EOL);
	printf("%d" EOL, nb);
	/* 12 */
	nb = printf("%1b %23y %100r" EOL);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
 