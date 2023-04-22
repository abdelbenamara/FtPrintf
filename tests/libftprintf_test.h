/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_test.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:15:57 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 15:04:26 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_TEST_H
# define LIBFTPRINTF_TEST_H

# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <bsd/string.h>

# define RESET			"\033[0m"
# define BOLDRED		"\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"      /* Bold Green */
# define BOLDMAGENTA	"\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"      /* Bold Cyan */
# define EOL			"\n"
# define LINE_SIZE		4096
# define BUFFER_SIZE	4096

char	*read_next_line(void);

int		ft_printf(const char *format, ...);

#endif
