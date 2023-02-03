/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_without_any_conversion_test.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:58:17 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/03 00:35:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

void	ft_printf_without_any_conversion_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s;
	int		i;
	int		j;

	printf(RESET "without any \t\t");
	s1 = read_next_line();
	s2 = read_next_line();
	s3 = read_next_line();
	s4 = read_next_line();
	i = atoi(read_next_line());
	s = read_next_line();
	j = atoi(read_next_line());
	ft_assert(1, i == j);
	ft_assert(2, !strcmp(s1, s));
	i = atoi(read_next_line());
	s = read_next_line();
	j = atoi(read_next_line());
	ft_assert(3, i == j);
	ft_assert(4, !strcmp(s2, s));
	i = atoi(read_next_line());
	s = read_next_line();
	j = atoi(read_next_line());
	ft_assert(5, i == j);
	ft_assert(6, !strcmp(s3, s));
	i = atoi(read_next_line());
	s = read_next_line();
	j = atoi(read_next_line());
	ft_assert(7, i == j);
	ft_assert(8, !strcmp(s4, s));
}
