/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkocob <dkocob@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 15:57:56 by dkocob        #+#    #+#                 */
/*   Updated: 2021/11/09 22:21:59 by dkocob        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	dc(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_divide(char **line, char **re)
{
	int i = 0;

	*line = *re;
	line[0][dc(*line, '\n')] = '\0';
	re[0] = &re[0][dc(re[0], '\n') + 1];
	return (i);
}

int	gnl(int fd, char **line, char **re)
{
	static char	buf[BUFFER_SIZE + 1];

	if (*re && dc(*re, '\n') != dc(*re, '\0'))
	{
		ft_divide(line, re);
		return (0);
	}
	else if (read(fd, buf, BUFFER_SIZE) > 0)
	{
		buf[BUFFER_SIZE] = '\0';
		*re = buf;
		ft_divide(line, re);
	}
	else
	{
		*line = *re;
		return (-1);
	}
	return (0);
}

char *get_next_line(int fd)
{
	char		*line;
	static char		*re;
	static char		ret;

	if (ret < 0)
		return (NULL);
	ret = gnl(fd, &line, &re);
	return (line);
}
