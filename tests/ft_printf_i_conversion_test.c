/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i_conversion_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:51:45 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/05 19:09:36 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

void	ft_printf_i_conversion_test(void)
{
	char	*line1;
	char	*line2;
	char	*line3;
	char	*line4;
	char	*line5;
	char	*line6;
	char	*line7;

	printf(RESET "\n%%i \t\t\t");
	line1 = read_next_line();
	line2 = read_next_line();
	line3 = read_next_line();
	line4 = read_next_line();
	line5 = read_next_line();
	line6 = read_next_line();
	line7 = read_next_line();
	ft_test(1, 2, line1);
	free(line1);
	ft_test(3, 4, line2);
	free(line2);
	ft_test(5, 6, line3);
	free(line3);
	ft_test(7, 8, line4);
	free(line4);
	ft_test(9, 10, line5);
	free(line5);
	ft_test(11, 12, line6);
	free(line6);
	ft_test(13, 14, line7);
	free(line7);
}
