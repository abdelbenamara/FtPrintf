/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:04:25 by abenamar          #+#    #+#             */
/*   Updated: 2023/04/22 17:00:50 by abenamar         ###   ########.fr       */
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

void	ft_conversion_test(char *title, int amount)
{
	char	**lines;
	int		i;
	
	printf(RESET "\n%s \t\t\t", title);
	lines = malloc(amount * sizeof(char *));
	if (!lines)
		return ;
	i = 0;
	while (i < amount)
		lines[i++] = read_next_line();
	i = 0;
	while (i < amount)
	{
		ft_test(2 * i + 1, 2 * i + 2, lines[i]);
		free(lines[i]);
		++i;
	}
	free(lines);
}

int	main(void)
{
	printf("\nProject: " BOLDMAGENTA "ft_printf\n");
	printf(RESET "\n-\nPart 1: " BOLDMAGENTA "Mandatory\n");
	printf(BOLDCYAN "\nConversion" RESET "\t\t" BOLDCYAN "Tests\n");
	ft_conversion_test("n/a", 6);
	ft_conversion_test("%c", 6);
	ft_conversion_test("%s", 7);
	ft_conversion_test("%p", 6);
	ft_conversion_test("%d", 8);
	ft_conversion_test("%i", 8);
	ft_conversion_test("%u", 6);
	ft_conversion_test("%x", 6);
	ft_conversion_test("%X", 6);
	ft_conversion_test("%%", 6);
#ifdef BONUS
	printf("\n" RESET "\n-\nPart 2: " BOLDMAGENTA "Bonus\n");
	printf(BOLDCYAN "\nConversion" RESET "\t\t" BOLDCYAN "Tests\n");
	ft_conversion_test("%#x", 6);
	ft_conversion_test("%#X", 6);
	printf("\n");
	ft_conversion_test("% d", 8);
	ft_conversion_test("% i", 8);
	printf("\n");
	ft_conversion_test("%+d", 8);
	ft_conversion_test("%+i", 8);
	ft_conversion_test("%+ d", 8);
	ft_conversion_test("%+ i", 8);
	ft_conversion_test("% +d", 8);
	ft_conversion_test("% +i", 8);
#endif
	printf("\n" RESET "\n");
	return (0);
}
