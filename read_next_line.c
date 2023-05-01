/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_next_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 01:35:25 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/01 17:08:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf_test.h"

static void	ft_strncpy(char *dst, const char *src, size_t size)
{
	while (--size && *src)
	{
		*dst = *src;
		++dst;
		++src;
	}
	*dst = '\0';
}

static uint8_t	ft_buffer_isready(char **buffer)
{
	if (*buffer)
		return (1);
	*buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!(*buffer))
		return (0);
	**buffer = '\0';
	return (1);
}

static uint8_t	ft_line_init(char **line, size_t len)
{
	*line = malloc((len + LINE_SIZE + 1) * sizeof(char));
	if (!*line)
		return (0);
	**line = '\0';
	return (1);
}

static uint8_t	ft_line_update(char **line, size_t len, char *buf, size_t idx)
{
	char	*tmp;

	if (buf[idx] != '\n'
		&& !(len + idx + 1 >= (len / LINE_SIZE + 1) * LINE_SIZE))
		ft_strncpy(*line + len, buf, idx + 2);
	else
	{
		if (buf[idx] == '\n')
		{
			tmp = malloc((len + idx + 2) * sizeof(char));
			if (!tmp)
				return (0);
		}
		else if (!ft_line_init(&tmp, ((len + idx) / LINE_SIZE + 1) * LINE_SIZE))
			return (0);
		ft_strncpy(tmp, *line, len + 1);
		ft_strncpy(tmp + len, buf, idx + 2);
		free(*line);
		*line = tmp;
	}
	return (1);
}

static uint8_t	ft_eol_in_buffer(char **line, char *buf, size_t *line_len)
{
	size_t	idx;
	char	*tmp;

	if (!**line && !*buf)
		return (0);
	idx = 0;
	while (buf[idx] && buf[idx] != '\n')
		++idx;
	if (!idx && !*buf)
	{
		tmp = malloc((*line_len + 1) * sizeof(char));
		if (!tmp)
			return (0);
		ft_strncpy(tmp, *line, *line_len + 1);
		return (free(*line), *line = tmp, 1);
	}
	else if (!ft_line_update(line, *line_len, buf, idx))
		return (0);
	*line_len += idx;
	if (buf[idx] == '\n')
		return (ft_strncpy(buf, buf + idx + 1, BUFFER_SIZE), 1);
	return (ft_strncpy(buf, buf + idx, BUFFER_SIZE), 0);
}

char	*read_next_line(void)
{
	static char	*buffer = NULL;
	char		*line;
	size_t		line_len;
	ssize_t		read_size;

	line_len = 0;
	if (!ft_line_init(&line, line_len))
		return (NULL);
	if (!ft_buffer_isready(&buffer))
		return (free(line), NULL);
	while (!ft_eol_in_buffer(&line, buffer, &line_len))
	{
		if (!*buffer)
		{
			read_size = read(STDIN_FILENO, buffer, BUFFER_SIZE);
			if ((!*line && !read_size) || read_size < 0)
				return (free(buffer), buffer = NULL, free(line), NULL);
			buffer[read_size] = '\0';
		}
	}
	if (!*buffer)
		return (free(buffer), buffer = NULL, line);
	return (line);
}
