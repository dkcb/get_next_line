/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkocob <dkocob@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 15:58:56 by dkocob        #+#    #+#                 */
/*   Updated: 2021/11/17 19:07:33 by dkocob        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_s 
{
	int *rem[1024];
}			t_st;

#endif


// char	*ft_divide(char **re)
// {
// 	char	*l;
// 	int i = dc(re[0], '\n');
// 	int len = dc(re[0], '\0');

// 	l = *re;
// 	l[i] = '\0';
// 	if (i < len)
// 		re[0] = &re[0][i + 1];
// 	return (l);
// }

		// printf("RE:%s\n", re);

// int	gnl(int fd, char *line, char *re, int *rp)
// {
// 	static char	buf[BUFFER_SIZE + 1];
// 	static char	rest[BUFFER_SIZE + 1];
// 	int			ret;
// 	int			i;

// 	i = 0;
// 	printf("rp:%d\n", *rp);
// 	if (ft_dc(rest, '\n') + *rp != ft_dc(rest, '\0'))
// 	{
// 		printf("RS0:%s\n", rest);
// 		while (rest[*rp] && rest[*rp] != '\n' && rest[*rp] != '\0')
// 		{
// 			line[i] = rest[*rp];
// 			// line = &line[i];
// 			*rp += 1;
// 			i++;
// 			line[i] = '\0';
// 		}
// 		return (*rp);
// 	}
// 	if (*rp == 0)
// 		ret = read(fd, buf, BUFFER_SIZE);
// 	buf[BUFFER_SIZE] = '\0';
// 	// printf("ret:%d\n", ret);
// 	printf("LINE:%s\n", line);
// 	printf("RS:%s\n", rest);
// 	ft_strlcpy(&line[ft_dc(line, '\0') - 1], buf, ft_dc(buf, '\n'));
// 	ft_strlcpy(rest, &buf[ft_dc(buf, '\n')], ft_dc(buf, '\0') - ft_dc(buf, '\n'));
// 	ft_strlcpy(line, buf, ft_dc(buf, '\n'));
// 	printf("LINE2:%s\n", line);
// 	printf("RS2:%s\n", rest);
// 	*rp += 1;
// 	return (ret);
// }

// int	ft_divide(char **line, char **re, int pos)
// {
// 	int i = 0;

// 	pos += dc(*re, '\n');
// 	ft_strlcpy(&line[0][dc(*line, '\0')], *re, pos + dc(*line, '\0') + 1);
// 	re[0] = &re[0][dc(re[0], '\n') + 1];
// 	return (i);
// }

// int	readbuf(int fd, char **re)
// {
// 	int	i = 0;
	
// 	i = read(fd, *re, BUFFER_SIZE);
// 	return (i)
// }

// int	newread(int fd, char **line, char **re, int pos)
// {
// 	int i = 1;

// 	while (i && dc(*re, '\n') != dc(*re, '\0'))
// 	{
// 		i = read(fd, *re, BUFFER_SIZE) > 0;
// 		*re[pos] = '\0';
// 		pos += i;
// 		ft_divide(re);
// 	}
// 	return (0);
// }
// int	gnl(int fd, char **line, char **re)
// {
// 	if (*re && dc(*re, '\n') != dc(*re, '\0'))
// 	{
// 		ft_divide(re);
// 		return (0);
// 	}
// 	else if (read(fd, *re, BUFFER_SIZE) > 0)
// 	{
// 		*re[BUFFER_SIZE] = '\0';
// 		ft_divide(re);
// 	}
// 	else
// 	{
// 		*line = *re;
// 		return (-1);
// 	}
// 	return (0);
// }