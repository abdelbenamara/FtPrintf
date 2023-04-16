/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:04:32 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/16 14:57:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	ft_printf_p_conversion_load(void)
{
	const void	*p1 = NULL;
	const void	*p2 = "test";
	int			n;
	int			nb;
	const void	*p3 = &n;
	const void	*p4 = &nb;
	void		*p5 = malloc(sizeof(size_t));

	/* 1 */
	nb = ft_printf("%p" EOL, p1);
	printf("%d" EOL, nb);
	/* 2 */
	nb = printf("%p" EOL, p1);
	printf("%d" EOL, nb);
	/* 3 */
	nb = ft_printf("%p" EOL, p2);
	printf("%d" EOL, nb);
	/* 4 */
	nb = printf("%p" EOL, p2);
	printf("%d" EOL, nb);
	/* 5 */
	nb = ft_printf("%p" EOL, p3);
	printf("%d" EOL, nb);
	/* 6 */
	nb = printf("%p" EOL, p3);
	printf("%d" EOL, nb);
	/* 7 */
	nb = ft_printf("%p" EOL, p4);
	printf("%d" EOL, nb);
	/* 8 */
	nb = printf("%p" EOL, p4);
	printf("%d" EOL, nb);
	/* 9 */
	nb = ft_printf("%p" EOL, p5);
	printf("%d" EOL, nb);
	/* 10 */
	nb = printf("%p" EOL, p5);
	printf("%d" EOL, nb);
	free(p5);
	/* 11 */
	nb = ft_printf("%p %p %p" EOL, p1, p2, p3);
	printf("%d" EOL, nb);
	/* 12 */
	nb = printf("%p %p %p" EOL, p1, p2, p3);
	printf("%d" EOL, nb);
}

int	main(void)
{
	ft_printf_p_conversion_load();
	return (0);
}
