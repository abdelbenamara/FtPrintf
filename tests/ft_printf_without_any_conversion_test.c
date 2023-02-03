/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_without_any_conversion_test.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:58:17 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/03 00:54:23 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

void	ft_printf_without_any_conversion_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*i;
	char	*s;
	char	*j;

	printf(RESET "without any \t\t");
	s1 = read_next_line();
	s2 = read_next_line();
	s3 = read_next_line();
	s4 = read_next_line();
	i = read_next_line();
	s = read_next_line();
	j = read_next_line();
	ft_assert(1, atoi(i) == atoi(j));
	ft_assert(2, !strcmp(s1, s));
	free(s1);
	free(i);
	free(s);
	free(j);
	i = read_next_line();
	s = read_next_line();
	j = read_next_line();
	ft_assert(3, atoi(i) == atoi(j));
	ft_assert(4, !strcmp(s2, s));
	free(s2);
	free(i);
	free(s);
	free(j);
	i = read_next_line();
	s = read_next_line();
	j = read_next_line();
	ft_assert(5, atoi(i) == atoi(j));
	ft_assert(6, !strcmp(s3, s));
	free(s3);
	free(i);
	free(s);
	free(j);
	i = read_next_line();
	s = read_next_line();
	j = read_next_line();
	ft_assert(7, atoi(i) == atoi(j));
	ft_assert(8, !strcmp(s4, s));
	free(s4);
	free(i);
	free(s);
	free(j);
}
