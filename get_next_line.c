/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdebbi <mdebbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:25:48 by mdebbi            #+#    #+#             */
/*   Updated: 2019/04/13 22:28:20 by mdebbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int		has_eol(char *str)
{
	while (*str)
		if (*str++ == '\n')
			return (1);
	return (0);
}

void	shift(char **storage, size_t len)
{
	char *shifted;

	shifted = ft_strnew(ft_strlen(*storage) - len - 1);
	ft_strcpy(shifted, *storage + len + 1);
	free(*storage);
	*storage = shifted;
}

int		check_storage(char **storage, int fd)
{
	char	buf[BUFF_SIZE + 1];
	int		symb;

	if (!*storage)
		*storage = ft_strnew(0);
	if (has_eol(*storage) == 0)
		while (1)
		{
			symb = read(fd, buf, BUFF_SIZE);
			buf[symb] = '\0';
			if (symb < BUFF_SIZE)
			{
				if (symb < 0 || (symb == 0 && *storage[0] == '\0'))
					return (symb < 0 ? -1 : 0);
				if (buf[symb - 1] != '\n')
				{
					buf[symb] = '\n';
					buf[symb + 1] = '\0';
				}
			}
			*storage = ft_strjoin(*storage, buf);
			if (has_eol(buf) || symb == 0)
				break ;
		}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*storage[12000];
	size_t		len;
	int			check;

	if (fd < 0 || BUFF_SIZE < 0)
		return (-1);
	check = check_storage(&storage[fd], fd);
	if (check < 1)
		return (check);
	len = ft_strchr(storage[fd], '\n') - storage[fd];
	*line = ft_strnew(len);
	ft_strncpy(*line, storage[fd], len);
	shift(&storage[fd], len);
	return (1);
}
