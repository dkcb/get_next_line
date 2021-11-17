/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkocob <dkocob@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/04 15:57:56 by dkocob        #+#    #+#                 */
/*   Updated: 2021/11/17 17:39:50 by dkocob        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

size_t	dc(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char *get_next_line(int fd)
{
	static char	line[200000000];
	static char	re[BUFFER_SIZE + 1];
	static int	endn;
	int i = 1;
	int pos = 0;

	if (dc(re, '\n') != dc(re, '\0'))
	{
		ft_strlcpy(line, re, dc(re, '\n'));
		ft_strlcpy(re, &re[dc(re, '\n') + 1], dc(&re[dc(re, '\n')], '\0'));
		return (line);
	}
	if (re[0] == '\n')
		endn--;
	if (re[0] != '\0')
	{
		pos += dc(re, '\0');
		ft_strlcpy(line, re, pos);
		re[0] = '\0';
	}
	while (i)
	{
		i = read(fd, re, BUFFER_SIZE);
		re[i] = '\0';
		printf("re1:.%s.\n", re);
		ft_strlcpy(&line[pos], re, dc(re, '\n'));
		if (dc(re, '\n') != dc(re, '\0'))
			break ;
		// printf("line1:-|%s|-\n", line);
		pos += i;
	}
	// printf("re2:-%s-\n", re);
	// if (i < BUFFER_SIZE && dc(re, '\0') == 0 && line[0] == '\0')
	// 	endn = -1;
	if (i < BUFFER_SIZE && dc(re, '\0') == 0 && re[0] == '\0')
		return (NULL);
	ft_strlcpy(re, &re[dc(re, '\n') + ((dc(re, '\n') != dc(re, '\0')))], dc(re, '\0') - dc(re, '\n'));
	printf("re3:-%s-, read:%d, endn:%d\n", re, i,endn);
	return (line);
}
