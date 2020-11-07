/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 04:44:25 by ndeana            #+#    #+#             */
/*   Updated: 2020/11/03 04:46:59 by ndeana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_read_fd(int fd, char **line)
{
	ssize_t	readout;
	size_t	i;
	size_t	j;
	char	buf[BUFFER_SIZE];

	i = 0;
	while (0 < (readout = read(fd, buf, BUFFER_SIZE)))
	{
		buf[readout] = '\0';
		if (*line)
			*line = (char *)ft_realloc(*line, sizeof(char) *
					(ft_strlen(*line) + readout));
		else
			*line = (char *)malloc(sizeof(char) * readout);
		j = -1;
		while (buf[++j])
			(*line)[i++] = buf[j];
		(*line)[i] = '\0';
		if (readout < BUFFER_SIZE)
			break ;
	}
	return (readout);
}
