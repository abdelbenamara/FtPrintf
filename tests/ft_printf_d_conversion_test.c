/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_conversion_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:34:27 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 20:35:02 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

void	ft_printf_d_conversion_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*s6;
	char	*s7;

	printf(RESET "\n%%d \t\t\t");
	s1 = read_next_line();
	s2 = read_next_line();
	s3 = read_next_line();
	s4 = read_next_line();
	s5 = read_next_line();
	s6 = read_next_line();
	s7 = read_next_line();
	ft_test(1, 2, s1);
	free(s1);
	ft_test(3, 4, s2);
	free(s2);
	ft_test(5, 6, s3);
	free(s3);
	ft_test(7, 8, s4);
	free(s4);
	ft_test(9, 10, s5);
	free(s5);
	ft_test(11, 12, s6);
	free(s6);
	ft_test(13, 14, s7);
	free(s7);
}
