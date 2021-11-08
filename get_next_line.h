/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkocob <dkocob@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 15:58:56 by dkocob        #+#    #+#                 */
/*   Updated: 2021/11/06 21:18:46 by dkocob        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_s 
{
	int *rem[1024];
}			t_st;

#endif

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