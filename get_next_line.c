/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkocob <dkocob@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 15:57:56 by dkocob        #+#    #+#                 */
/*   Updated: 2021/11/06 22:05:09 by dkocob        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_dc(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

size_t	ft_strlcpy(char *d, char *s, int len)
{
	size_t	i;

	i = 0;
	while (s[i] && i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (i);
}

int	ft_divide(char *line, char *re)
{
	int i = 0;

	printf("\n\nDline:---%s---,\nDre:---%s---\n", line, re);


	// if (ft_dc(re, '\n') != ft_dc(re, '\0'))
	// {
		line = re;
		line[ft_dc(line, '\n') + 1] = '\0';
		// printf("\n\nDline:%s\n\n", line);
	// }
	re = &re[ft_dc(re, '\n') + 1];
	printf("D2line:---%s---\nD2re:%---s---\n\n", line, re);

	// while (rest[i] && rest[i] != '\n' && rest[i] != '\0')
	// 	i++;
	return (i);
}





int	gnl(int fd, char *line, char *re, int *rp)
{
	static char	buf[BUFFER_SIZE + 1];
	// static char	rest[BUFFER_SIZE + 1];
	int			ret;
	int			i;

	i = 0;
	// if (*rp == 0)
	// {
	// 	ret = read(fd, buf, BUFFER_SIZE);
	// 	line = buf;
	// }
	ret = read(fd, buf, BUFFER_SIZE);
	line = buf;
	// ft_divide(line, re);
	printf("GNline:===%s===,\nGNre:===%s===\n", line, re);
	return (*rp);
}

char *get_next_line(int fd)
{
	char			buf[BUFFER_SIZE + 1];
	static char		line[1234567890];
	static char		re[1024];
	int				ret;
	static int		rp;

	ret = gnl(fd, line, re, &rp);
	// printf("RET:%d\n", ret);
	printf("RETS:%s\n", re);
	// printf("LINE:%s\n", line);
	// if(ret != 0)
	return (line);
	// return (NULL);
}
