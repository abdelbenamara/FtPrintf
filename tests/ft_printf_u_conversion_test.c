/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u_conversion_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:46:55 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/04 22:47:38 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

void	ft_printf_u_conversion_test(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;

	printf(RESET "\n%%u \t\t\t");
	s1 = read_next_line();
	s2 = read_next_line();
	s3 = read_next_line();
	s4 = read_next_line();
	s5 = read_next_line();
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
}
