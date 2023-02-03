/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_next_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 22:51:22 by abenamar          #+#    #+#             */
/*   Updated: 2023/02/02 23:59:11 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_test.h"

static uint8_t	ft_init_buffer(char **buffer)
{
	if (!*buffer)
	{
		*buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!*buffer)
			return (0);
		**buffer = '\0';
	}
	return (1);
}

static void	ft_reset_buffer(char **buffer)
{
	free(*buffer);
	*buffer = NULL;
}

static uint8_t	ft_line_buffer_sync(char **line, char *buffer)
{
	size_t	i;
	size_t	len;
	char	*tmp;

	if (!*buffer)
		return (0);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		++i;
	len = strlen(*line);
	tmp = malloc((len + i + 2) * sizeof(char));
	if (!tmp)
		return (0);
	strlcpy(tmp, *line, len + 1);
	free(*line);
	strlcpy(tmp + len, buffer, i + 2);
	*line = tmp;
	if (buffer[i] == '\n')
		return (strlcpy(buffer, buffer + i + 1, BUFFER_SIZE), 1);
	return (strlcpy(buffer, buffer + i, BUFFER_SIZE), 0);
}

char	*read_next_line(void)
{
	static char		*buffer = NULL;
	char			*line;
	ssize_t			read_size;

	line = malloc(1 * sizeof(char));
	if (!line)
		return (NULL);
	if (!ft_init_buffer(&buffer))
		return (free(line), NULL);
	*line = '\0';
	while (!ft_line_buffer_sync(&line, buffer))
	{
		if (!*buffer)
		{
			read_size = read(STDIN_FILENO, buffer, BUFFER_SIZE);
			if (*line && !read_size)
				return (ft_reset_buffer(&buffer), line);
			else if (read_size <= 0)
				return (ft_reset_buffer(&buffer), free(line), NULL);
			buffer[read_size] = '\0';
		}
	}
	if (!*buffer)
		return (ft_reset_buffer(&buffer), line);
	return (line);
}
