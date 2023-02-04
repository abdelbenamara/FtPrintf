/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:04:25 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 23:30:46 by abenamar         ###   ########.fr       */
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

void	ft_test(int	index1, int index2, char *line)
{
	char	*i;
	char	*s;
	char	*j;

	i = read_next_line();
	s = read_next_line();
	j = read_next_line();
	ft_assert(index1, atoi(i) == atoi(j));
	ft_assert(index2, !strcmp(line, s));
	free(i);
	free(s);
	free(j);
}

int	main(void)
{
	printf("\nProject: " BOLDMAGENTA "ft_printf\n");
	printf(RESET "\n-\nPart 1: " BOLDMAGENTA "Mandatory\n");
	printf(BOLDCYAN "\nConversion" RESET "\t\t" BOLDCYAN "Tests\n");
	ft_printf_no_conversion_test();
	ft_printf_c_conversion_test();
	ft_printf_s_conversion_test();
	ft_printf_d_conversion_test();
	ft_printf_i_conversion_test();
	ft_printf_u_conversion_test();
	ft_printf_percent_conversion_test();
#ifdef BONUS
#endif
	printf("\n" RESET "\n");
	return (0);
}
