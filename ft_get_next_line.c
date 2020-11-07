/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 20:04:50 by ndeana            #+#    #+#             */
/*   Updated: 2020/10/05 23:59:07 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strdel(char **s)
{
	if (s != NULL)
	{
		if (*s != NULL)
			free(*s);
		*s = NULL;
	}
	return (-1);
}

static int	addline(char **static_fd, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while ((*static_fd)[len] && (*static_fd)[len] != '\n')
		len++;
	if ((*static_fd)[len] == '\n')
	{
		if (!(*line = ft_substr(*static_fd, 0, len)) ||
				!(tmp = ft_strdup(&((*static_fd)[len + 1]))))
			return (ft_strdel(static_fd));
		free(*static_fd);
		*static_fd = tmp;
	}
	else
	{
		if (!(*line = ft_strdup(*static_fd)))
			return (ft_strdel(static_fd));
		ft_strdel(static_fd);
		return (0);
	}
	return (1);
}

int			read_fd(int fd, char **static_fd, char *buf)
{
	int		read_out;
	char	*tmp;

	while ((read_out = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[read_out] = '\0';
		if (!static_fd[fd])
		{
			if (!(static_fd[fd] = ft_strdup(buf)))
				return (-1);
		}
		else
		{
			tmp = ft_strjoin(static_fd[fd], buf);
			free(static_fd[fd]);
			if (!tmp)
				return (-1);
			static_fd[fd] = tmp;
		}
		if (ft_strchr(static_fd[fd], '\n'))
			break ;
	}
	return (read_out);
}

int			ft_get_next_line(int fd, char **line)
{
	static char	*static_fd[FD_SIZE];
	int			read_out;
	char		*buf;

	if (BUFFER_SIZE <= 0 || !(buf = malloc(sizeof(char) * BUFFER_SIZE + 1)))
	{
		*line = NULL;
		return (-1);
	}
	if (fd < 0 || !line || 0 > (read_out =
		(ft_strchr(static_fd[fd], '\n')) ? 1 : read_fd(fd, static_fd, buf)))
	{
		free(buf);
		*line = NULL;
		return (-1);
	}
	else if (!read_out && !static_fd[fd])
	{
		free(buf);
		if (!(*line = ft_strdup("\0")))
			return (-1);
		return (0);
	}
	free(buf);
	return (addline(&static_fd[fd], line));
}
