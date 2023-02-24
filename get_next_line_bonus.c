/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalta <spalta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:30:28 by spalta            #+#    #+#             */
/*   Updated: 2023/01/09 16:12:19 by spalta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_archive(int fd, char *archive)
{
	char	*book;
	int		r_byte;

	book = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!book)
		return (NULL);
	r_byte = 1;
	while (ft_check(archive) && r_byte != 0)
	{
		r_byte = read(fd, book, BUFFER_SIZE);
		if (r_byte == -1)
		{
			free(archive);
			free(book);
			return (NULL);
		}
		book[r_byte] = '\0';
		archive = ft_strjoin_gnl(archive, book);
	}
	free(book);
	return (archive);
}

char	*get_next_line(int fd)
{
	static char	*archive[256];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	archive[fd] = get_archive(fd, archive[fd]);
	if (!archive[fd])
		return (NULL);
	line = ft_line(archive[fd]);
	archive[fd] = ft_archive(archive[fd]);
	return (line);
}
