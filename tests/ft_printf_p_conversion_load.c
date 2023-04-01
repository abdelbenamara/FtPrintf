/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p_conversion_load.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:04:32 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/13 00:35:25 by abenamar         ###   ########.fr       */
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

	nb = ft_printf("%p" EOL, p1);
	printf("%d" EOL, nb);
	nb = printf("%p" EOL, p1);
	printf("%d" EOL, nb);
	nb = ft_printf("%p" EOL, p2);
	printf("%d" EOL, nb);
	nb = printf("%p" EOL, p2);
	printf("%d" EOL, nb);
	nb = ft_printf("%p" EOL, p3);
	printf("%d" EOL, nb);
	nb = printf("%p" EOL, p3);
	printf("%d" EOL, nb);
	nb = ft_printf("%p" EOL, p4);
	printf("%d" EOL, nb);
	nb = printf("%p" EOL, p4);
	printf("%d" EOL, nb);
	nb = ft_printf("%p" EOL, p5);
	printf("%d" EOL, nb);
	nb = printf("%p" EOL, p5);
	printf("%d" EOL, nb);
	free(p5);
}

int	main(void)
{
	ft_printf_p_conversion_load();
	return (0);
}