/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_no_conversion_load.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:43:15 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 19:54:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_no_conversion_load(void)
{
	int	nb;

	/* 1 */
	nb = ft_printf("" EOL);
	printf("%d" EOL, nb);
	nb = printf("" EOL);
	printf("%d" EOL, nb);
	/* 2 */
	nb = ft_printf("\t" EOL);
	printf("%d" EOL, nb);
	nb = printf("\t" EOL);
	printf("%d" EOL, nb);
	/* 3 */
	nb = ft_printf("ø" EOL);
	printf("%d" EOL, nb);
	nb = printf("ø" EOL);
	printf("%d" EOL, nb);
	/* 4 */
	nb = ft_printf("Hello World!" EOL);
	printf("%d" EOL, nb);
	nb = printf("Hello World!" EOL);
	printf("%d" EOL, nb);
	/* 5 */
	nb = ft_printf("123" EOL);
	printf("%d" EOL, nb);
	nb = printf("123" EOL);
	printf("%d" EOL, nb);
}

int	main(void)
{
	ft_printf_no_conversion_load();
	return (0);
}
