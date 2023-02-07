/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_test.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:15:57 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/06 20:10:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_TEST_H
# define LIBFTPRINTF_TEST_H

# include <stdio.h>
# include <stdint.h>
# include <string.h>
# include <bsd/string.h>
# include "libftprintf.h"

# define RESET			"\033[0m"
# define BOLDRED		"\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"      /* Bold Green */
# define BOLDMAGENTA	"\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"      /* Bold Cyan */
# define EOL			"\n"
# define BUFFER_SIZE	4096

char	*read_next_line(void);
void	ft_assert(int index, int assertion);
void	ft_test(int index1, int index2, char *line);

void	ft_printf_no_conversion_test(void);
void	ft_printf_c_conversion_test(void);
void	ft_printf_s_conversion_test(void);
void	ft_printf_d_conversion_test(void);
void	ft_printf_i_conversion_test(void);
void	ft_printf_u_conversion_test(void);
void	ft_printf_x_conversion_test(void);
void	ft_printf_upper_x_conversion_test(void);
void	ft_printf_percent_conversion_test(void);

#endif
