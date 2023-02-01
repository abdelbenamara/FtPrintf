/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_test.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:15:57 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/01 21:47:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_TEST_H
# define LIBFTPRINTF_TEST_H

# include <stdio.h>
# include "libftprintf.h"

# define RESET			"\033[0m"
# define BOLDRED		"\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"      /* Bold Green */
# define BOLDMAGENTA	"\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"      /* Bold Cyan */
# define EOL			"\n"

void	ft_assert(int index, int assertion);

void	ft_printf_test(void);

#endif
