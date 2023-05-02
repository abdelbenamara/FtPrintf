/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p_minus_load.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:04:32 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/02 01:39:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static void	load(void)
{
	const void	*p1 = NULL;
	const void	*p2 = "test";
	int			n;
	int			nb;
	const void	*p3 = &n;
	const void	*p4 = &nb;
	void		*p5 = malloc(sizeof(size_t));

	/* 1 */
	nb = ft_printf("%-4p" EOL, p1);
	printf("%d" EOL, nb);
	/* 2 */
	nb = printf("%-4p" EOL, p1);
	printf("%d" EOL, nb);
	/* 3 */
	nb = ft_printf("%-14p" EOL, p2);
	printf("%d" EOL, nb);
	/* 4 */
	nb = printf("%-14p" EOL, p2);
	printf("%d" EOL, nb);
	/* 5 */
	nb = ft_printf("%-24p" EOL, p3);
	printf("%d" EOL, nb);
	/* 6 */
	nb = printf("%-24p" EOL, p3);
	printf("%d" EOL, nb);
	/* 7 */
	nb = ft_printf("%-34p" EOL, p4);
	printf("%d" EOL, nb);
	/* 8 */
	nb = printf("%-34p" EOL, p4);
	printf("%d" EOL, nb);
	/* 9 */
	nb = ft_printf("%-44p" EOL, p5);
	printf("%d" EOL, nb);
	/* 10 */
	nb = printf("%-44p" EOL, p5);
	printf("%d" EOL, nb);
	free(p5);
	/* 11 */
	nb = ft_printf("%-15p %-30p %-345p" EOL, p1, p2, p3);
	printf("%d" EOL, nb);
	/* 12 */
	nb = printf("%-15p %-30p %-345p" EOL, p1, p2, p3);
	printf("%d" EOL, nb);
}

int	main(void)
{
	load();
	return (0);
}
