/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:04:25 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/03 00:59:41 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

void	ft_assert(int index, int assertion)
{
	if (assertion)
		printf(BOLDGREEN "%d. OK\t", index);
	else
		printf(BOLDRED "%d. KO\t", index);
}

int	main(void)
{
	printf("\nProject: " BOLDMAGENTA "ft_printf\n");
	printf(RESET "\n-\nPart 1: " BOLDMAGENTA "Mandatory\n");
	printf(BOLDCYAN "\nConversion" RESET "\t\t" BOLDCYAN "Tests\n");
	ft_printf_without_any_conversion_test();
#ifdef BONUS
#endif
	printf("\n" RESET "\n");
	return (0);
}
